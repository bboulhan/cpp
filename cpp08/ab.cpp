#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>

void ab(T arr, int j)
{
	int i = 0;
	while (i < j)
		std::cout << arr[i++] << std::endl;
}

void print(int i)
{
	(void )i;
	std::cout << "hry" << "\n";
}

int main()
{
	std::vector<int> array;

	int i = 0;
	int j = 0;
	int k = 0;
	typedef int ab;

	ab a = 6;
	std::cout << a << "\n";
	// while (++i < 10)
	// 	array.push_back(i);
	// std::vector<int>::iterator ptr = array.begin();
	
	// j = *ptr - *(++ptr);
	// // std::cout << j << "\n";

	// while (ptr != array.end())
	// {
	// 	k = *ptr - *(++ptr);
	// 	if (k < j)
	// 		j = k;
	// 	std::cout << *ptr << "\t" << j << "\n";
	// }
	//std::for_each(array.begin(), array.end() - 5, print);
	// std::for_each_n(ptr, array.end() - 5, print);
	//ptr = std::find(array.begin(), array.end(), 0);
	//std::cout << *ptr << "\n";

	
	
}