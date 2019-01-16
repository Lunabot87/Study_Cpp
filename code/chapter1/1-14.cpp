#include <iostream>
#include <algorithm>
using namespace std;

#define MY_NUMBER 9 //보통 대문자를 씀
#define HELLO "Hello_World"

#define MAX(a,b) ((a>b) ? a : b)
#define LIKE_APPLE  //이 파일 안에서만 적용이 됨

void doSomething(){

	#ifdef LIKE_APPLE
		cout << "Apple" << endl;
	#endif

	#ifndef LIKE_APPLE
		cout << "Orange" << endl;
	#endif
}
int main(){

	cout << MY_NUMBER << endl;
	cout << HELLO << endl;
	cout << MAX(1,4) << endl;
	cout << max(1,6) << endl;
	doSomething();

	return 0;
}
