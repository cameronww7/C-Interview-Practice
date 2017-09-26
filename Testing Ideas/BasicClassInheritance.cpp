/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

namespace {

	/**************************************************************************
	 * Class : 	Animal Class - Base Class
	 *************************************************************************/
	class Animal {
		public:
			void speak() const;
			const string & name() const { return _name; }
			const string & type() const { return _type; }
			const string & sound() const { return _sound; }

		protected:
			// protected constructor for use by derived classes
			Animal ( const string & n, const string & t, const string & s )
			: _name(n), _type(t), _sound(s) {}

		private:
			string _name;
			string _type;
			string _sound;
			// private constructor prevents construction of base class
			Animal(){ puts("\n> base class construction");};

			friend class Dog; // works but exposes all private variables
			friend class Cat; // all the derived classes.
			friend class Pig;
	}; // end of base class animal

	void Animal::speak() const {
		printf("\n> %s the %s says %s", _name.c_str(), _type.c_str(), _sound.c_str());
	}



	/**************************************************************************
	 * Class : Dog class - derived from Animal
	 *************************************************************************/
	class Dog : public Animal {
		public:
			Dog( string n ) : Animal(n, "dog", "woof"), walked(0) {};
			int walk() { return ++walked; }

		private:
			int walked;
	}; // end of Dog clas



	/**************************************************************************
	 * Class :  Cat class - derived from Animal
	 *************************************************************************/
	class Cat : public Animal {
		public:
			Cat( string n ) : Animal(n, "cat", "meow"), petted(0) {};
			int pet() { return ++petted; }

		private:
			int petted;
	}; // end of Cat class



	/**************************************************************************
	 * Class : 	Pig class - derived from Animal
	 *************************************************************************/
	class Pig : public Animal {
		public:
			Pig( string n) : Animal(n, "pig", "oink"), fed(0) {};
			int feed() { return ++fed; }
			std::string latin() const;
		private:
			int fed;
	}; // end of Pig class

	std::string Pig::latin() const {
		return name() + "-ay";
//		return Animal::name() + "-ay"; // both work returns work
	}
}
void BasicClassInheritance(void) {
    Dog dogClass("Rover");
    Cat catClass("Fluffy");
    Pig pigClass("Arnold");

    dogClass.speak();
    catClass.speak();
    pigClass.speak();

    printf("\n\n> the dog has been walked %d times", dogClass.walk());
    printf("\n> the cat has been petted %d times", catClass.pet());
    printf("\n> the pig has been   fed  %d times", pigClass.feed());
    printf("\n> the pig is sometimes called %s", pigClass.latin().c_str());
}
