#include <iostream>

int v1, v2, num_plus, num_multiplex = 0;

int main(){
	(std::cin >> v1) >> v2;
	num_plus = v1+v2;
	num_multiplex = v1*v2;
	std::cout << "Plus : " << num_plus << " multiplex : " << num_multiplex << std::endl;
	return 0;
}
