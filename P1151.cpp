#include<iostream>
using namespace std;
int main(){
	int k,m;
	cin>>k;
	bool out=false;
	for(m=10000;m<=30000;m++){
		if(m/100%k==0&&m/10%1000%k==0&&m%1000%k==0){
			out=true;
			cout<<m<<endl;
		}
		
	}
	if(out==false){
		cout<<"No"<<endl;
	}
	return 0;
}
