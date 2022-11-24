#include <iostream>

class Animal
{
	public:
		virtual void name(){std :: cout << "Animal" << std:: endl;}
		virtual void toFeed(){std :: cout << "Any Food" << std:: endl;}
		virtual void id(){std :: cout << "*base class:" << std:: endl;}
		virtual void makeSound(){std :: cout << "Any Sound" << std:: endl;}
};
// base class:

class Dog : public Animal
{	
	public:
		std:: string color = "Black";
		std:: string type = "Avcharka";
		void name(){std :: cout << "Dog" << std:: endl;}
		void toFeed(){std :: cout << "Any MEAT" << std:: endl;}
		void makeSound(){std :: cout << "HAF-HAF" << std:: endl;}
		void id(){std :: cout << "derived1 class:" << std:: endl;}
};
// derived1 class:

class Cat : public Animal
{	
	public:
		std:: string color = "White";
		std:: string type = "Simaski";
		void name(){std :: cout << "Cat" << std:: endl;}
		void toFeed(){std :: cout << "Any MEAT & FISH" << std:: endl;}
		void makeSound(){std :: cout << "MYAU-MYAU" << std:: endl;}
		void id(){std :: cout << "derived2 class:" << std:: endl;}
};
// derived2 class:

int main()
{
	Cat C;
	Dog D;
C.name();
C.toFeed();
C.makeSound();
C.id();
std :: cout << "Cat color is a " <<C.color <<std:: endl;
std :: cout << "Cat type is a " <<C.type <<std:: endl;
D.name();
D.toFeed();
D.makeSound();
D.id();
std :: cout << "Dog color is a " <<D.color <<std:: endl;
std :: cout << "Dog type is a " <<D.type <<std:: endl;
}
