#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n = A.size();

    vector<int> ans;
    unordered_set<int> seenA, seenB;

    int common = 0;

    for (int i = 0; i < n; i++) {
        int a = A[i];
        int b = B[i];

        seenA.insert(a);
        seenB.insert(b);

        // If current element of A already appeared in B
        if (seenB.count(a))
            common++;

        // If current element of B already appeared in A
        // avoid double counting when a == b
        if (a != b && seenA.count(b))
            common++;

        ans.push_back(common);
    }

    return ans;
}

int main() {
    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};

    vector<int> result = findThePrefixCommonArray(A, B);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}