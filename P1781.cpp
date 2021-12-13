#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
struct people{
	int biaohao;
	string piao;
	int changdu;
} a[25];

bool mmp(people x,people y){
	if(x.changdu<y.changdu) return true;
	if(x.changdu==y.changdu&&x.piao<y.piao) return true;
	return false;
}
int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i].piao;
		a[i].biaohao=i;
		a[i].changdu=a[i].piao.size();
	}
	sort(a,a+n,mmp);
	cout<<a[n-1].biaohao+1<<endl;
	cout<<a[n-1].piao<<endl;
	return 0;
} 
