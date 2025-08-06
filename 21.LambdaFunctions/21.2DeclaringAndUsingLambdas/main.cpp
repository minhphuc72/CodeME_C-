#include <iostream>


int main(){
   
    
    //Explicitly specify the return type
    auto func3 = [](double a, double b)-> int{
        return a + b;
    };

    auto func4 = [](double a, double b){
        return a + b;
    };

    double a{6.9};
    double b{3.5};

    auto result3 = func3(a,b);
    auto result4 = func4(a,b);

    std::cout << "result3 : " << result3 << std::endl;
    std::cout << "result4 : " << result4 << std::endl;
    std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl; // 4
    std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl; // 8
    
    std::cout << "Done!" << std::endl;

    return 0;
}