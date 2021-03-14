#include <iostream>
#include <vector>
#include <string>
#include<string_view>
#include <algorithm>
#include <iterator>
#include <cassert>

template<typename T>
void insert_sorted(std::vector<T>& vec,  const std::string &word)
{
    const auto insert_pos(lower_bound(begin(vec), end(vec), word));
    vec.insert(insert_pos, word);
}

int main()
{
    std::vector<std::string> v{ "some", "vector", "words", "algorithm", "order", "cpp", "zbook" };

    assert(false == is_sorted(begin(v), end(v)));
    sort(begin(v), end(v));

    insert_sorted(v, "foo");
    insert_sorted(v, "cassert");
    assert(true == is_sorted(begin(v), end(v)));//true while push_back and than failed
    v.push_back("olcay");
   // assert(true == is_sorted(begin(v), end(v)));//Assertion failed

    for (const auto& w : v) {
        std::cout << w << " ";
    }
   std:: cout << '\n';
}
