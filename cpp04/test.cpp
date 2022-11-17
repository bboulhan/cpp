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

class test : public inhert{
	private:
		std::string *str;
	public:
		test(){
			this->str = new std::string("unknown");

		}
		test(std::string str)
		{
			this->str = new std::string;
			*this->str = str;
		}
		test &operator=(const test &op){
			this->str = op.str;
			return *this;
		}
		virtual ~test(){
			delete str;
		}
		void nothing(){
			std::cout << "say hey\n";
		};
		virtual std::string getstr()
		{
			return (*this->str);
		}
};

int main()
{
	try{
	//test ab;
	//inhert **xx = new inhert*();
	std::string *a;
	int y = -5;
	a = new std::string[y];

	//inhert yy;
	// inhert *y;
	// y = *xx;
	//std::cout << y << std::endl;
	//std::cout << y->getstr() << "\n";
	//std::cout << y->getstr() << std::endl;
	//std::cout << ab.getstr() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;		
	}

}