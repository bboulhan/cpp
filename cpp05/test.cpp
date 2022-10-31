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
        
        // c = y;
        s = new char[y];
        
        //s = (char *)malloc(-5);
        //std::cout << c << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}