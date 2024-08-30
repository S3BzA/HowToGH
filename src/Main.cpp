#include "Component.hpp"
#include "Composite.hpp"
#include "Leaf.hpp"
#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include "Adder.hpp"

// // function to demonstrate the operation of a single component
// void DemonstrateSingleComponent(Component *component) {
//   std::cout << "RESULT------: " << component->Operation();
// }

// // function to demonstrate the operation of a composite component
// void DemonstrateCompositeComponent(Composite *composite, Component *component) {
//   if (composite->IsComposite()) {
//     composite->Add(component);
//   }
//   std::cout << "RESULT: " << composite->Operation();
// }

// void basicTest(){
//   // demonstrate a simple component
//   Leaf *simple = new Leaf();
//   std::cout << "Client: I've got a simple component:\n";
//   DemonstrateSingleComponent(simple);
//   std::cout << "\n\n";

//   // create a composite tree structure
//   Composite *tree = new Composite();
//   Composite *branch1 = new Composite();

//   Leaf *leaf1 = new Leaf();
//   Leaf *leaf2 = new Leaf();
//   Leaf *leaf3 = new Leaf();

//   branch1->Add(leaf1);
//   branch1->Add(leaf2);

//   Composite *branch2 = new Composite();
//   branch2->Add(leaf3);

//   tree->Add(branch1);
//   tree->Add(branch2);

//   std::cout << "Client: Now I've got a composite tree:\n";
//   DemonstrateSingleComponent(tree);
//   std::cout << "\n\n";

//   // demonstrate managing the composite tree
//   std::cout << "Client: I don't need to check the components classes even when "
//                "managing the tree:\n";
//   DemonstrateCompositeComponent(tree, simple);
//   std::cout << "\n";

//   // clean up memory
//   delete simple;
//   delete tree; // This should recursively delete all children

// }
void valgrindBasics(){
  int * arr = new int[10];
  // for (int i = 0; i <= 10; i++)
  for (int i = 0; i < 10; i++)
  {
    arr[i] = 1;
  }
  delete [] arr;


  
  int* num1;
  int* num2;
  Adder * adder1 = new Adder(num1, num2);
  adder1->doAdd();
  // Do something else
  delete adder1;
  Adder * adder2 = new Adder(num1, num2);
  adder2->doAdd();
}
void valgrindSneakyVectorTest(){
  std::vector<Leaf> leaves;
  leaves.push_back(Leaf());

  std::vector<Leaf> comps;
  Leaf * leaf2 = new Leaf();
  comps.push_back(*leaf2);
  comps.erase(comps.begin());
  // delete leaf1;
}
int main() {
  valgrindBasics();
  // valgrindSneakyVectorTest();
  return 0;
}
