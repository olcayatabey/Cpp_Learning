#include <cassert>
#include <string>
#include <iostream>


std::string nthFizzbuzz(unsigned N)
{
	std::string str;
	if (N % 3 == 0)str += "fizz";
	if (N % 5 == 0)str += "buzz";
	if (str.empty())str = std::to_string(N);
	return str;
}
std::string fizzbuzzUntil(unsigned N)
{
	assert(N > 0);
	std::string str = nthFizzbuzz(1);
	for (int i = 2; i <= N; ++i)
	{
		str += "," + nthFizzbuzz(i);
	}
	return str;
}



int main() {
	std::cout << "hangi sayiya kadar :";
	unsigned int n;
	std::cin >>n;
	std::cout << fizzbuzzUntil(n) << '\n';
}
