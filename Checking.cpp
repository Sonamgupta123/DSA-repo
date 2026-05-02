 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
 
    int main(){
        vector<int> nums = {4,3,2,6};
        int ans =  maxRotateFunction(nums);
        cout<<ans<<endl;
        return 0;
    }