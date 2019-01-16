#include <iostream>

using namespace std;

int add(int a, int b){
	return a+b;
}

void doSomething(){
	add(1, 2);
}

int main(){
	
	cout << add(1,2) << endl;

	return 0;
}
