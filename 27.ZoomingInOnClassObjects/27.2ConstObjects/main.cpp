#include <iostream>
#include "dog.h"

int main(){

    //const Dog dog1("Fluffy","Shepherd",2);

    //Direct access
    /*
    dog1.print_info(); // Compiler error

    dog1.set_name("Milou"); // Compiler error

    dog1.print_info();
    */

   const Dog dog1("Fluffy","Shepherd",2);
   
   //Pointer to non const
   Dog * dog_ptr = &dog1;

   //Non const reference
   Dog& dog_ref = dog1;
    

    return 0;
}