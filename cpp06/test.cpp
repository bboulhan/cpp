#include <iostream>
#include <string>
#include <cstdlib>

class A {
	private:
		std::string *str;
	public:
		A(std::string str){
			this->str = new std::string (str);		
		}
		A(){
			str = new std::string ("");
		}
		~A(){
			delete str;
		}
		std::string *getA(){
			return str;
		}
		
};

int main(int ac, char **av)
{
	// uintptr_t j;
	// std::string *str = new std::string ("hhhhhhhh");

	// j = reinterpret_cast<uintptr_t>(str);
	// std::cout << std::hex << j << "\t" << str << "\n";
	float *f = new float(56.96);
	int *i = reinterpret_cast<int*>(f);
	float *d = reinterpret_cast<float*>(i);

	std::cout << *i << "\n";
	std::cout << *d << "\n";


	//std::cout << *ab.getA();
}