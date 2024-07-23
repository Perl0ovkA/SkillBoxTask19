#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	virtual void AnimalSound() = 0;
};

class Dog : public Animal
{
public:
	void AnimalSound() override
	{
		cout << "Woof!\n";
	}
};

class Cat : public Animal
{
public:
	void AnimalSound() override
	{
		cout << "Meow!\n";
	}
};

class Cow : public Animal
{
public:
	void AnimalSound() override
	{
		cout << "Mooo!\n";
	}
};

int main()
{
	Animal* animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	for (Animal* a : animals)
		a->AnimalSound();
}