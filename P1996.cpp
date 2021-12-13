#include<cstdio>   //c language head
#include<stack>
#include<iostream>
#include<queue> 
using namespace std;
int main(){
	queue <int> q;
	int m,n,i=1,count=1,a[100],x,k;
	cin>>n>>m;//n people, m numbered die.
	for(i=1;i<=n;i++) q.push(i);
	i=1;
	while(q.size()>0){
		x=q.front();		
		q.pop();
		if(count%m!=0) q.push(x);
		else {
			a[i]=x;
			i++;
		}
		count++;
	}
	for(k=1;k<=n;k++) cout<<a[k]<<" ";
	cout<<endl;
	return 0;
}
