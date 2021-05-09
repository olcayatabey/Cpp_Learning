#if 0
template<unsigned int n>
struct faktorial
{
	enum {
		value = n * faktorial<n - 1>::value
	};
};
template<>
struct faktorial<0> {
	enum {
		value = 1
	};

};
int main()
{
	int myarr[faktorial<5>::value];
	for (auto& v : myarr)
	{
		std::cout << v << " ";
	}
}
#endif
//second example , using constexpr C++14
/*
#if 1

constexpr long long factorial( long long n)
{
	return n == 0 ? 1 : n * factorial(n - 1);
}

int main()
{
	char test [factorial(5)];
	std::cout << factorial(6);
}

#endif // !1


*/
