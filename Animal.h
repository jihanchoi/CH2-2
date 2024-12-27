#include <iostream>
#ifndef ANIMAL_H_
#define ANIMAL_H_
#endif

using namespace std;

class Animal
{
public:
	virtual void makeSound() {};
	virtual ~Animal() {};
};

class Dog : public Animal{
public:
	void makeSound() {
		cout << "Woof! \n";
	}
};

class Cat : public Animal {
public:
	void makeSound() {
		cout << "Meow! \n";
	}
};

class Cow : public Animal {
public:
	void makeSound() {
		cout << "Moo! \n";
	}
};