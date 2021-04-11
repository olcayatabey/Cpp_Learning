
#include <string_view>
#include <iostream>

int main()
{
	using namespace std::literals;

	std::string_view sw1 = "abc\0\0def";
	std::string_view sw2 = "abc\0\0def"sv;

	std::cout << "sw1  size : " << sw1.size() << " [" << sw1 << "]\n";
	std::cout << "sw2  size : " << sw2.size() << " [" << sw2 << "]\n";
}
