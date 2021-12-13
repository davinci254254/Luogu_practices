#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n=0,a[20],i;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	sort(a+5,a+10);
	for(i=0;i<=9;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
