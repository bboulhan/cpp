#include <iostream>

class A{

};

int main()
{
	int *a = new int[5]();
	for(int i = 0;i < 5;i++){

	std::cout << a[i] << std::endl;
	}
}
