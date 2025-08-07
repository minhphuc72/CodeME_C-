#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public:
        //Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    //public: 
        //Member variables
        double base_radius{};
        double height{};
};


int main(){

    Cylinder cylinder1; // Objects
    std::cout << "volume : " << cylinder1.volume() << std::endl;
}