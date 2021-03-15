#include <iostream>
#include <iterator>
#include <vector>


int main()
{
    std::vector<int> ivec{ 1, 2, 3, 4, 5 };

    copy(ivec.rbegin(), ivec.rend(), std::ostream_iterator<int>{std::cout, ", "});
    std::cout << '\n';

    copy(make_reverse_iterator(end(ivec)),
        make_reverse_iterator(begin(ivec)),
       std:: ostream_iterator<int>{std::cout, ", "});
    std::cout << '\n';
}
