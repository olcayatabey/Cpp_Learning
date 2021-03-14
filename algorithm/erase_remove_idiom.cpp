#include <iostream>
#include<algorithm>
#include<vector>

int main()
{
	std::vector<int>ivec{ 2,5,84,4,5,12,2,2,5,2,16 };

	ivec.shrink_to_fit();
	std::cout << "size " << ivec.size() << "\n";
	std::cout << "capacity " << ivec.capacity() << "\n";
	ivec.erase(remove(ivec.begin(), ivec.end(), 2));

	std::cout << "\nsize " << ivec.size() << "\n";
	std::cout << "capacity " << ivec.capacity() << "\n";

	ivec.erase(remove_if(ivec.begin(), ivec.end(), [](int a) {return a % 2 == 1; }),ivec.end());
	ivec.shrink_to_fit();
	std::cout << "\nsize " << ivec.size() << "\n";
	std::cout << "capacity " << ivec.capacity() << "\n";

}
