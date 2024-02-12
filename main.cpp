#include <stdio.h>
#include "Dog.h"
#include "Cat.h"

int main() {
	Cat* cat = new Cat;
	Dog* dog = new Dog;
	cat->Speak();
	dog->Speak();

	delete cat;
	delete dog;

	return 0;
}