#include<iostream>
#include<algorithm>
using namespace std;

struct nainong{
	int danjia;
	int chanliang;
} a[6000];
bool mmp(nainong x,nainong y){
	return(x.danjia<y.danjia);
}
int main(){
	int n,m,k,cost=0,i;
	cin>>n>>m;//m nainong
	for(i=0;i<m;i++){
		cin>>a[i].danjia>>a[i].chanliang;
	}
	sort(a,a+m,mmp);
	for(k=0;k<m;k++){
		if(n>=a[k].chanliang){
			n=n-a[k].chanliang;
			cost+=a[k].chanliang*a[k].danjia;
		}else {
			cost+=n*a[k].danjia;
			break;
		}
	}
	cout<<cost<<endl;		
	return 0;
}
