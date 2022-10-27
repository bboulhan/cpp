#include <iostream>
# include <cmath>

class test{
	private:
		int i;
		std::string *str;
	public:
		test(std::string str, int i){
			std::cout << "constructer\n";
			this->str = new std::string(str);
			this->i = i;
		}
		~test(){
			delete str;
		}
		test(const test &t1)
		{
			std::cout << "copy constructer\n";
			this->i = t1.i;
			this->str = new std::string;
			memcpy(this->str, t1.str, t1.str->size());
		}
		void operator= (const test &t1)
		{
			std::cout << "operator activated\n";
			this->i = t1.i;
			delete this->str;
			this->str = new std::string;
			memcpy(this->str, t1.str, t1.str->size());
		}
		std::string getstr()
		{
			return (*this->str);
		}
		int getint()
		{
			return (this->i);
		}
		test operator++(int)
		{
			this->i++;
			return (*this);
		}
		bool operator>(const test &op) const
		{
			if (this->i > op.i)
				return 1;
			return 0;
		}
};


//--------------------------------------------------------//

int main()
{
	test xx("ibra", 21);
	test ab("hello", 24);
	
	std::cout << (xx > ab);
	//std::cout << max(xx.getint(), ab.getint());
	//std::cout << xx.getint();
	//std::cout << ab.getstr() << "\t" << ab.getint() << std::endl;
	
}