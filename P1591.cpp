#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int a[1000000],m,n;
int main(){
	int t,i,j;//t for the set of number they will out in
	cin>>t;
	for(i=0;i<t;i++){
		cin>>m>>n; 
		memset(a,0,sizeof(a));
		a[0]=1;
		//m for the factorial, n for the numbers that we want to find.
		int p=1,jw=0,g;
		for(g=2;g<=m;g++){
			int tmp=p;
			for(j=0;j<tmp;j++){
			//j for weishu
				a[j]=a[j]*g+jw;
				jw=a[j]/10;
				a[j]=a[j]%10;
			}
			if(jw>0){
				a[p]=jw%10;
				jw=jw/10;
				p++;
			}
		}
		int cont=0;
		for(j=0;j<p;j++){
//			cout<<a[j]<<" ";
			if(a[j]==n){
				cont++;
			}
		}
		cout<<cont<<endl;	
	}
	return 0;
} 
