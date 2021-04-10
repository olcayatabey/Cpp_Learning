#include <iostream>
#include<initializer_list>

template<typename U,typename T>
U get_value(T type)
{
	U value = 0.0;
	switch (type)
	{
	case 1:
		value = 100.00;
		break;
	case 2:
		value = 50.55;
		break;
	case 3:
		value = 42.0;
		break;
	default:
		break;
	}
	return value;
}

int main()
{
	std::initializer_list<int> ilist{ 1, 2, 3, 4 };
	for (auto& val : ilist)//range based for loop
	{
		std::cout << "value (int) :" << get_value<int>(val) << "\n";//int
		std::cout << "value ( double) :" << get_value<double>(val) << "\n";//double
		std::cout << "\n";
	}
}
