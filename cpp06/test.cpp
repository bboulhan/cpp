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
	A ab("ibra");

	srand((unsigned)time(0)); 
    int i;
    i = (rand()%3); 
    std::cout << i << "\n"; 

	// try{
	// 	int i = stoi(*ab.getA());
	// }
	// catch(const std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }



	//std::cout << *ab.getA();
}