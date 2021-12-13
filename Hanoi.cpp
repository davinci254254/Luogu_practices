#include<iostream>
using namespace std;

void hanoi (char from, char to, char by, int n){

	if (n == 1) {
		cout<<from<<"-->"<<to<<endl;
		return;
	}
	hanoi(from, by, to, n-1);
	cout << from << "-->" << to << endl;
	hanoi (by, to, from, n-1);
}


int main(){
	hanoi('a', 'c', 'b', 5);
	return 0;
}
