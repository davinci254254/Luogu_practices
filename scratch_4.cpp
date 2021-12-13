#include <iostream>
#include <algorithm>
using namespace std;
int n, cont1, cont2, res;
struct node{
    int start;
    int end;
}a[155];
bool cmp(node x, node y){
    if(x.end != y.end){
        return x.end < y.end;
    }else if(x.end == y.end){
        return x.start < y.start;
    }
}
int main(){
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>a[i].start>>a[i].end;
    }
    sort(&a[1],&a[n+1],cmp);
    //取a+b的最小值
    //按照结束时间排序，因为结束时间越早，就可以安排更多的节目
    cont1 = a[1].end;
    res = 1;
    for (int i = 2; i <= n ; ++i) {
        if(cont1 <= a[i].start){
            cont1 = a[i].end; //实时更新结尾的位置
            res++;
        }else if(cont2 <= a[i].start){
            cont2 = a[i].end;
            res++;
            swap(cont1, cont2); //保证两个进度平均
        }
    }
    cout<<res<<endl;
    return 0;
}