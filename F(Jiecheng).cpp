#include<iostream>
using namespace std;
int f(int x){
	int y=1;
	for(int i=1;i<=x;i++)	{
		y*=i;
	}
	return y;
}


int main(){
	int n,m;
	cin>>n;
	for(m=1;m<=n;m++){
		cout<<f(m)<<endl;
	} 
	
	
	return 0;
}
