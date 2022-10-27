#include <iostream>
# include <cmath>

class test{
	private:
		int i;
		std::string *str;
	public:
		test(std::string str, int i){
			std::cout << "constructer called\n";
			this->str = new std::string(str);
			this->i = i;
		}
		~test(){
			delete str;
			std::cout << i << " descontructer called\n";
		}
		test(const test &t1)
		{
			std::cout << i <<" copy constructer called \n";
			*this = t1;
		}
		void operator= (const test &t1)
		{
			std::cout << "operator called\n";
			this->i = t1.i;
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
	//test ab("hello", 24);
	test cc(xx);
	//cc = ab;


	//std::cout << (xx > ab);
	//std::cout << max(xx.getint(), ab.getint());
	//std::cout << cc.getint() << "\n";
	//std::cout << cc.getint()<< "\n";
	//std::cout << ab.getstr() << "\t" << ab.getint() << std::endl;
	
}