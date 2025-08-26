#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "Animal.cpp"
#include "AnimalsInZoo.h"
#include "AnimalsInZoo.cpp"
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Red Panda", 1825);
   
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   delete animal1;


   AnimalsInZoo animalInZoo1(animal3);
   animalInZoo1.display();

}

