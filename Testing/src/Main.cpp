#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
int factorial(int number) { return number <= 1 ? number : factorial(number - 1) * number; }

int main(){
    return 0;
}