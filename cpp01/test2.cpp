#include <iostream>
#include <stdlib.h>

int main()
{
    std::string str = "hello frisa ibra frisa";
    std::string str2 = "kali";
    std::size_t found = str.rfind(str2);
    //str.insert(6, str2, 0, 2);
    //str.erase(0, 5);
    std::cout << found << std::endl;
    std::cout << str << std::endl;
}