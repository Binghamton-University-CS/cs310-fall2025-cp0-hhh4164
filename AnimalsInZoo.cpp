#include "Animal.h"
#include "Animal.cpp"
#include "AnimalsInZoo.h"
#include <iostream>

	AnimalsInZoo::AnimalsInZoo(Animal animalObj){
		numAnimals = 1;
		animal = animalObj;
	}

	AnimalsInZoo::AnimalsInZoo(){
		numAnimals = 0;
	}

	void AnimalsInZoo::display(){
		std::cout << numAnimals << std::endl;
		if(numAnimals==1){
			animal.display();
		}
	}
