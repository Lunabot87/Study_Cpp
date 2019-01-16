#include <iostream>

using namespace std;

void doSomething(int x){
	x = 123;
	cout << x << " " << &x << endl; //#2
}

int main(){
	int x = 0;

	cout << x << " " << &x << endl;
//	int x(0); // x = 0
/*	{// 구역을 구분
		//int x = 1; //다른 메모리를 가짐
		x = 1;
		cout << x << " " << &x << endl;
	}

	{
		int x = 2;
		cout << x << " " << &x << endl;
	}*/
	doSomething(x);
	cout << x << " " << &x << endl;

	return 0;
}
