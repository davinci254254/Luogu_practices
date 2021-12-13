#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int a[105][105];
bool dp[105][105][105]; //[边长] [起始点x] [起始点y]
int r=1;
int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
            if(a[i][j]) dp[1][i][j]=1;
        }
    }
    for (int i = 2; i <= min(m,n); ++i) {
        for (int j = 0; j <n-i; ++j) {
            for (int k = 0; k <m-i ; ++k) {
                if(dp[i-1][j][k]&&dp[i-1][j+1][k]&&dp[i-1][j][k+1]&&dp[i-1][j+1][k+1]){
                    dp[i][j][k]= true;
                }
                if(dp[i][j][k]){
                    r=max(r,i);
                }
            }
        }
    }
    cout<<r<<endl;
    return 0;
}
