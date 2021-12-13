#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a1, a2;
    int len1, len2;
    len1= strlen(a1);
    len2= strlen(a2);
    int f[1000][1000];
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++) {
            if (a1[i] = a1[j]) {
                f[i][j] = f[i - 1][j - 1] + 1;
            } else {
                f[i][j] = max(f[i][j - 1], f[i - 1][j]);
            }
        }
    }
    cout<<f[i][j]<<endl;
    return 0;
}

