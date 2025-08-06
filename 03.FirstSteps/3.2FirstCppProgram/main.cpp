#include <iostream>
#include <string>

int main(){

 std::string city;
 std::cout <<" Where do you live?"<< std::endl;
 std::getline (std::cin, city);
 std::cout<<"I live "<< city << std::endl;
 std::cout<<"I've heard great things about "<< city << " I'd like to go sometime" <<std::endl;
return 0;
}
