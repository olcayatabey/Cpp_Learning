#include <iostream>
#include <string>

int main()
{
    auto lambda_one([]() { return 15; });
    auto lambda_two([] { return 27; });

    std::cout << lambda_one() << ", " << lambda_two() << '\n';


    auto plus([](auto x, auto y) { return x + y; });

    std::cout << plus(15, 27) << '\n';
    std::cout << plus(std::string{ "cpp" }, "23") << '\n';

    std::cout << [](auto x, auto y) { return x + y; }(4, 2) << '\n';


    auto counter([count = 0]() mutable { return ++count; });//mutable lambda c++17

    for (size_t i{ 0 }; i < 5; ++i) {
        std::cout << counter() << ", ";
    }
    std::cout << '\n';


    int m_x{ 0 };
    std::cout << "Value of m_x =     " << m_x << "\n";
    auto incrementer([&m_x] { ++m_x; });
    for (int i{}; i < 10; ++i)
    {
        incrementer();

    }
    std::cout << "Value of m_x after the 10 incrementer() calls: " << m_x << '\n';

        incrementer();
        incrementer();
        incrementer();
        incrementer();
        incrementer();
   

    std::cout << "Value of m_x after the 5 incrementer() calls: " << m_x << '\n';


    auto plus_ten([=](int x) { return plus(10, x); });
    
    std::cout << plus_ten(32) << '\n';
}
