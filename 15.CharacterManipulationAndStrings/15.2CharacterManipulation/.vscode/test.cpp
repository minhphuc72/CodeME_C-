#include <iostream>

int main(){
 
    char message[]{" Nguyen Minh Phuc dang lam viec o FPT"};

    // for(size_t a; a < std::size(message); a++){
    //     if(std::isblank(message[a])){
    //         std::cout<< " is blank [ "<< a << " ] "<< std::endl;
    //     }
    // }

    for(auto a: message){
        if ( std::islower(a)){
            std::cout<<" " << a;
        }

    }
}
