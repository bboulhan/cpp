#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>

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
		virtual std::string getstr()
		{
			return (*this->str);
		}
};


#endif 