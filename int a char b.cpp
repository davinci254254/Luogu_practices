#include<iostream>
using namespace std;
struct stu{
	int eng;
	int chi;
};
int main(){
	int a;
	char b='i';
	void * p;
	void * q;
	p = &b;
	q = &a;
	cout << (int*)p-(int*)q;
//	int *p=&a;
//	char *q=&b; //q is menpaihao, O(1);
//	cout<<p<<endl;
//	cout<<&q<<endl;
	stu s;
	stu *k=&s;
	(*k).chi=23; k->eng=4;
	return 0;
}
