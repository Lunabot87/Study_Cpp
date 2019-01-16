#include <iostream>

namespace MySpace1{

	int doSomething(int a, int b){
		return a + b;
	}
}
namespace MySpace2{
	int doSomething(int a, int b){
		return a * b;
	}
}

using namespace std;
using namespace MySpace1;
int main(){
	
	cout << MySpace1::doSomething(3, 4) << endl;
	cout << doSomething(3, 4) << endl;

	return 0;
}
