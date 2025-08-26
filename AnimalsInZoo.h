#ifndef ANIMALS_IN_ZOO_H
#define ANIMALS_IN_ZOO_H
#include "Animal.h"

class AnimalsInZoo {
	public:
		AnimalsInZoo(Animal animalObj);

		AnimalsInZoo();

		void display();

	private:
		int numAnimals;
		Animal animal = Animal();
};
#endif

