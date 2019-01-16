#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecture!\n\n" ; //<< std::endl;
	
	cout << "x is "<< x << "pi is "<< pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	cout << "\a";

	//입력을 받는 방법
	//std::cin
	
	int x_in;

	cout <<"Before your input x is" << x_in << endl;

	cin >> x_in;

	cout <<"Your input is" << x_in << endl;

	return 0;
}
