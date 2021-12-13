#include<iostream>
using namespace std;
long long f(long long n){
	if (n==1 || n==2)return 1;
	return f(n-1)+f(n-2);
}
int main(){
	int x;
	cin>>x;
	cout<<f(x)<<endl;
	return 0;
}
