#include <iostream>
#include <string.h>
#include <stdlib.h>

class myException : public std::exception {
    virtual  const char* what() const throw() {
        return ("test allah allah");
    }
};



int main()
{
    try
    {
        char *s;
        // char c = 0;
        int y = -5;
		if (y < 0)
			throw("negative");
        //std::cout << c << "\n";
    }
    catch(const char *s)
    {
        std::cout << s << '\n';
    }
    
}