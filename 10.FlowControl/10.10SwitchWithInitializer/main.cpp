#include <iostream>


int main(){

    bool green {false};

    if(green){
        int car_count{23};
        std::cout << "Light is green " << car_count << "on the move!" << std::endl;
    }else{
     
        //car_count++; Compiler error
        std::cout << "Light is not green. Y'all should STOP!" << std::endl;
    }

    return 0;
}
