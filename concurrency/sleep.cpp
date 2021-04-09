#include <chrono>
#include <iostream>
#include<thread>

int main()
{
	using namespace std::chrono_literals;

	std::cout << "The main has started and sleap for 20 s...\n";
  
	std::this_thread::sleep_for(20s);
  
	std::cout << "Again going to sleap for 10 s...\n";
  
	std::this_thread::sleep_until(std::chrono::high_resolution_clock::now() + 10s);
  
	std::cout << "The main finished\n";
}
