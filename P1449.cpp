#include<iostream>
#include<stack>
using namespace std;
int main(){
	char a[1005];
	cin>>a;
	int i=0,m,n;
	stack <int> s;
	while(a[i]!='@'){
		int x=0;
		if(a[i]>='0'&&a[i]<='9'){
			x=x*10+a[i]-'0';
			i++;
			while(a[i]!='.'){
				x=x*10+a[i]-'0';
				i++;
			}
			s.push(x);
		}
		else if(a[i]=='+'){
			m=s.top();
			s.pop();
			n=s.top();
			s.pop();
			s.push(m+n);
		}
		else if(a[i]=='-'){
			m=s.top();
			s.pop();
			n=s.top();
			s.pop();
			s.push(n-m);
		}
		else if(a[i]=='*'){
			m=s.top();
			s.pop();
			n=s.top();
			s.pop();
			s.push(n*m);
		}
		else if(a[i]=='/'){
			m=s.top();
			s.pop();
			n=s.top();
			s.pop();
			s.push(n/m);
		}
		i++;//total i without @.
	}
	if(s.size()==1){
		cout<<s.top()<<endl;
	}
	return 0;
}
