#include<iostream>
#include<vector>
using namespace std;
 vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
         int n = positions.size();

        // Step 1: combine all data
        vector<tuple<int,int,char,int>> robots;
        for(int i = 0; i < n; i++){
            robots.push_back({positions[i], healths[i], directions[i], i});
        }

        // Step 2: sort by position
        sort(robots.begin(), robots.end());

        stack<int> st; // store indices of robots (in sorted array)
        vector<int> currHealth(n);

        for(int i = 0; i < n; i++){
            currHealth[i] = get<1>(robots[i]);
        }

        for(int i = 0; i < n; i++){
            char dir = get<2>(robots[i]);

            if(dir == 'R'){
                st.push(i);
            }
            else{ // 'L'
                while(!st.empty() && currHealth[i] > 0){
                    int j = st.top();

                    if(currHealth[j] < currHealth[i]){
                        // R dies
                        st.pop();
                        currHealth[i]--;
                        currHealth[j] = 0;
                    }
                    else if(currHealth[j] > currHealth[i]){
                        // L dies
                        currHealth[j]--;
                        currHealth[i] = 0;
                        break;
                    }
                    else{
                        // both die
                        st.pop();
                        currHealth[i] = 0;
                        currHealth[j] = 0;
                        break;
                    }
                }
            }
        }

        // Step 3: collect survivors
        vector<pair<int,int>> res; // {original index, health}

        for(int i = 0; i < n; i++){
            if(currHealth[i] > 0){
                res.push_back({get<3>(robots[i]), currHealth[i]});
            }
        }

        // Step 4: sort by original index
        sort(res.begin(), res.end());

        vector<int> ans;
        for(auto &p : res){
            ans.push_back(p.second);
        }

        return ans;
    }
int main(){
    vector<int> positions = {5,4,3,2,1};
    vector<int> healths = {2,17,9,15,10};
    string directions = "RRRRR";
    return 0;
}