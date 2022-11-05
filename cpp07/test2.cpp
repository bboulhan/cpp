#include <iostream>

class inhert{
    private:
		std::string *str;
	public:
		inhert(){
			str = new std::string("unknown");
		}
		virtual ~inhert(){
            //delete str;
        }
		virtual inhert &operator=(const inhert &op){
			this->str = op.str;
			return *this;	
		}
		// virtual void nothing() = 0;
		virtual std::string *getstr(){
			return(this->str);
		}
};

class test : public inhert
{
	private:
		std::string *str;
	public:
		test(){
			this->str = new std::string("unknown2");
			//str = "unknown";

		}
		test(std::string str)
		{
			this->str = new std::string;
			this->str = &str;
			
		}
		virtual test &operator=(const test &op){
			this->str = op.str;
			return *this;
		}
		test(const test &copy){
			*this = copy;
		}
		virtual ~test(){
			//delete []str;
		}
		void nothing(){
			std::cout << "say hey\n";
		};
		virtual std::string *getstr()
		{
			return (this->str);
		}
};

int main()
{	
try
{
	test ab("ibra");
	test *cc = new test();
	inhert *xx = new inhert();

	std::cout << cc << "\n";
	cc = reinterpret_cast<test*>(xx);
	if (cc == NULL)
		throw("cast fail");
	std::cout << cc << "\n";
	xx = dynamic_cast<inhert*>(&ab);
	
	// cc = static_cast<test*>(&xx);

	// std::cout << *cc->getstr() << std::endl;
	std::cout << *cc->getstr() << std::endl;
	std::cout << *ab.getstr() << std::endl;
	std::cout << *xx->getstr() << std::endl;
}
catch(const char *s)
{
	std::cout << s << std::endl;
}

}