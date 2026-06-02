#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


    struct SegTree {
        int n;
        vector<int> st;

        SegTree(int n) : n(n), st(4 * n + 5, 0) {}

        void update(int idx, int val, int node, int l, int r) {
            if (l == r) {
                st[node] = val;
                return;
            }

            int mid = (l + r) >> 1;

            if (idx <= mid)
                update(idx, val, node << 1, l, mid);
            else
                update(idx, val, node << 1 | 1, mid + 1, r);

            st[node] = max(st[node << 1], st[node << 1 | 1]);
        }

        void update(int idx, int val) {
            update(idx, val, 1, 0, n - 1);
        }

        int query(int L, int R, int node, int l, int r) {
            if (R < l || r < L) return 0;

            if (L <= l && r <= R)
                return st[node];

            int mid = (l + r) >> 1;

            return max(
                query(L, R, node << 1, l, mid),
                query(L, R, node << 1 | 1, mid + 1, r)
            );
        }

        int query(int L, int R) {
            if (L > R) return 0;
            return query(L, R, 1, 0, n - 1);
        }
    };

    vector<bool> getResults(vector<vector<int>>& queries) {
        const int MX = 50001; // sentinel > all possible coordinates

        set<int> obstacles;
        obstacles.insert(0);
        obstacles.insert(MX);

        // Build final obstacle configuration
        for (auto &q : queries) {
            if (q[0] == 1)
                obstacles.insert(q[1]);
        }

        SegTree seg(MX + 1);

        // gap ending at obstacle x = x - previous obstacle
        int last = 0;
        for (auto it = next(obstacles.begin()); it != obstacles.end(); ++it) {
            seg.update(*it, *it - last);
            last = *it;
        }

        vector<bool> ans;

        for (int i = (int)queries.size() - 1; i >= 0; --i) {
            auto &q = queries[i];

            if (q[0] == 2) {
                int x = q[1];
                int sz = q[2];

                auto itR = obstacles.upper_bound(x);
                int prevObs = *std::prev(itR);

                int bestGap = seg.query(0, prevObs);
                int tailGap = x - prevObs;

                ans.push_back(max(bestGap, tailGap) >= sz);
            }
            else {
                int p = q[1];

                auto itCur = obstacles.find(p);
                auto itPrev = std::prev(itCur);
                auto itNext = std::next(itCur);

                int prv = *itPrev;
                int nxt = *itNext;

                // Remove obstacle p in reverse process:
                // merge [prv,p] and [p,nxt] into [prv,nxt]
                seg.update(nxt, nxt - prv);
                seg.update(p, 0);

                obstacles.erase(itCur);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }


int main() {
   

    for(bool x : ans)
        cout << (x ? "true" : "false") << " ";

    cout << endl;

    return 0;
}