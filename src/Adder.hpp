#ifndef ADDER_H
#define ADDER_H
#include <iostream>
class Adder{
    public:
        int* num1;
        int* num2;
        Adder(int* num1, int* num2){
            this->num1 = num1;
            this->num2 = num2;
        };
        void doAdd(){
            std::cout << *num1 + *num2;
        }
        void doSubtract(){
            throw "Wrong class buddy";
        }
        ~Adder(){
            delete num1;
            delete num2;
        }
};
#endif