#include <iostream>
#include <cstring>

int main (){

   
	std::cout << std::endl;
    std::cout << "std::strrchr : " << std::endl;
	//doc : https://en.cppreference.com/w/cpp/string/byte/strrchr
	
    char input[] = "/home/user/hello.cpp";
    char* output = std::strrchr(input, '/');

     std::cout << output+1 << std::endl; //+1 because we want to start printing past 
                                            // the character found by std::strrchr.
    

}