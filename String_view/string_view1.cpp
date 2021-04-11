#include <iostream>
#include<string_view>
#include<string>
#include<array>

#if 0

int main()
{

	char abc[] = "olcay atabey";
	std::array<char, 6>arr{ 'a','t','a','b','e','y' };
	std::string str{ "cpp is the best programing language" };

	std::string_view strw;
	std::cout << "size strw " << sizeof(strw) << "\n";
	std::cout << "[" << strw<<"]\n\n";
	std::string_view sw{ "olcay atabey" };
	std::cout << "size sw  " << sizeof(sw) << "\n";
	std::cout << "[" << sw<<"]\n\n";

	strw = { abc,6 };
	std::cout << "size strw " << sizeof(strw) << "\n";
	std::cout << "[" << strw << "]\n\n";

	sw = { str.data(),15 };
	std::cout << "size sw " << sizeof(sw) << "\n";
	std::cout << "[" << sw << "]\n\n";
	strw ={ arr.data(),sizeof(arr)};
	std::cout << "size strw " << sizeof(strw) << "\n";
	std::cout << "[" << strw << "]\n";
	

}
#endif
