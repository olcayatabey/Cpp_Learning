#include <iostream>
#include<initializer_list>

template<typename T>
auto get_value(T type)
{
	auto value = 0.0;
	switch (type)
	{
	case 1:
		value = 100.00;
		break;
	case 2:
		value = 50.55;
		break;
	case 3:
		value = 42;
		break;
	default:
		break;
	}
	return value;
}

int main()
{
	std::initializer_list<int> ilist{1, 2, 3, 4};
	for (auto& val : ilist)//range based for loop
	{
		std::cout << "value :"<<get_value(val) << "\n";
	}
}
