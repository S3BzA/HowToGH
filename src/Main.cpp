//only required in one file
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Component.hpp"
#include "Composite.hpp"
#include "Leaf.hpp"
#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include "Adder.hpp"
#include "doctest.h"
using namespace std;


TEST_CASE("Leaf knows it is not a composite"){
  Leaf* leaf = new Leaf();
  CHECK_FALSE(leaf->IsComposite());
}
TEST_CASE("Adder doesn't add incorrectly"){
    int* num1 = new int(5);
    int* num2 = new int(5);
    Adder* adder = new Adder(num1, num2);
    adder->doAdd();
    CHECK_FALSE(*num1 + *num2 == 11);
}
TEST_CASE("Adder cannot subtract"){
    int* num1 = new int(5);
    int* num2 = new int(5);
    Adder* adder = new Adder(num1, num2);
    CHECK_THROWS(adder->doSubtract());  
}
TEST_CASE("Adding insane numbers"){
    int* num1 = new int(1000000000);
    int* num2 = new int(1000000000);
    Adder* adder = new Adder(num1, num2);
    adder->doAdd();
    CHECK(*num1 + *num2 == 2000000000);
}
TEST_CASE("composites know they are composite"){
  Composite* composite = new Composite();
  CHECK(composite->IsComposite());
}
TEST_CASE("Adder can add two numbers"){
    int* num1 = new int(5);
    int* num2 = new int(5);
    Adder* adder = new Adder(num1, num2);
    adder->doAdd();
    CHECK(*num1 + *num2 == 10);
}
TEST_CASE("Adder functions as expected"){
    SUBCASE("Adder can add two numbers"){
        int* num1 = new int(5);
        int* num2 = new int(5);
        Adder* adder = new Adder(num1, num2);
        adder->doAdd();
        CHECK(*num1 + *num2 == 10);
    }
    SUBCASE("Adder cannot subtract"){
        int* num1 = new int(5);
        int* num2 = new int(5);
        Adder* adder = new Adder(num1, num2);
        CHECK_THROWS(adder->doSubtract());  
    }
}
