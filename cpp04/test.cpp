#include <iostream>
#include <string.h>


class test{
	private:
		std::string *str;
	public:
		test(){
			this->str = new std::string[2];

		}
		test(std::string str)
		{
			this->str = new std::string[4];
			int i = 0;
			while (i < 4)
				this->str[i++] = str;
		}
		~test(){
			delete []str;
		}
		std::string *getstr()
		{
			return (this->str);
		}
}; 

int main()
{
	test ab;
	int i = 0;
	//std::cout << ab.getstr();
	while (i < 5)
	 	std::cout << ab.getstr()[i++] << std::endl;
}