#include<iostream>

template<typename T>
constexpr T Power(T value, unsigned power)
{
	return power == 0 ? 1 : value * Power(value, power - 1);
}

int main()
{
	std::cout<<Power(5, 4); //runtime calculated,

	constexpr int a = Power(2, 5);//compile time calculated,

}
