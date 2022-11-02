#include <iostream>
#include <string.h>

class inhert{
    private:
		std::string *str;
	public:
		inhert(){
			str = new std::string("ibra");
		}
		virtual ~inhert(){
            delete str;
        }
		inhert &operator=(const inhert &op){
			this->str = op.str;
			return *this;	
		}
		virtual void nothing() = 0;
		virtual std::string getstr(){
			return(*this->str);
		}
};

class test //: public inhert
{
	private:
		std::string *str;
	public:
		test(){
			this->str = new std::string("unknown");
			//str = "unknown";
		}
		test(std::string str)
		{
			this->str = new std::string;
			this->str = &str;
			
		}
		test &operator=(const test &op){
			this->str = op.str;
			return *this;
		}
		test(const test &copy){
			*this = copy;
		}
		virtual ~test(){
			//delete str;
		}
		void nothing(){
			std::cout << "say hey\n";
		};
		virtual std::string &getstr()
		{
			return (*this->str);
		}
};

int main()
{	
	test ab("ibra");
	test *xx = &ab;

	std::cout << ab.getstr() << "\t" << &ab  << "\t" << &ab.getstr() << std::endl;
	std::cout << xx->getstr() << "\t" << xx  << "\t" << &xx->getstr() << std::endl;



}