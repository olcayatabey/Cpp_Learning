#include <iostream>
#include<ostream>
#include<string>

class Animal {
private:
	std::string a_name;
	int height;
	int weight;
public:
	Animal(std::string name, int height, int weight)
	{
		this->a_name = name;
		this->height = height;
		this->weight = weight;
	}
	friend void  printWeight(Animal animal);
	friend class AnimalPrinter;
	friend std::ostream& operator<<(std::ostream& os, Animal animal);
};

void printWeight(Animal animal)
{
	std::cout << "Animal " << animal.a_name << " has " << animal.height << " height and " << animal.weight << " weight\n";
}
class AnimalPrinter {
public:
	void print(const Animal& animal)
	{
		std::cout << animal.a_name << " " << animal.height << ", " << animal.weight << std::endl;
	}
};


std::ostream&operator<<(std::ostream &os, Animal animal)
{
	os << "Animal" << animal.a_name << " has " << animal.height << " height and " << animal.weight << " weight\n";
}


int main() 
{
	Animal animal = { "kuzu",10, 5 };
	printWeight(animal);
	AnimalPrinter aPrinter;
	aPrinter.print(animal);
	
}
