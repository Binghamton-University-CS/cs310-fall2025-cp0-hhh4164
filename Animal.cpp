#ifndef ANIMAL_CPP
#define ANIMAL_CPP
#include "Animal.h"
#include <iostream>

	Animal::Animal(std::string speciesName, unsigned int discoveryYear){
		species = speciesName;
		year_discovered = discoveryYear;
	}
	Animal::Animal() : species(""), year_discovered(0){};

   void Animal::display(){
	   std::cout << species << " [" << year_discovered << "]" << std::endl;
   
   }
#endif
