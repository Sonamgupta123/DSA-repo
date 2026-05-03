 #include<iostream>
 #include<vector>
 #include <queue>
 #include<algorithm>
 using namespace std;
 

                if (digit == 2 || digit == 5 || digit == 6 || digit == 9) {
                    changed = true;
                }

                num /= 10;
            }
             if (valid && changed) {
                count++;
            }
        }

        return count;
    }
    int main(){
       int n = 2;
       int ans = rotatedDigits(n);
       cout<<ans<<endl;
    }