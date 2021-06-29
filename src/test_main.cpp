#include <iostream>
#include "test.h"

//This is a test program demonstrating use of CMAKE

int main() 
{
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"This is a test program"<<std::endl;

    test T;

    T.set_data(5);
    std::cout<<"The Data stored in T1 is: "<<T.get_data()<<std::endl;

    test T2(15);
    std::cout<<"The parameterised data of T2 is: "<<T2.get_data()<<std::endl;

    std::cout<<"Exiting Program: "<<std::endl;
    return 0;
}