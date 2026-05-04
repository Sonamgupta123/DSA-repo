 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
  

              
    int main(){
        string s = "abcde";
        string goal = "cdeab";
        bool ans = rotateString(s , goal);
        cout<<ans<<endl;
      return 0;
    }