#ifndef LEAF_HPP
#define LEAF_HPP

#include "Component.hpp"

class Leaf : public Component {
public:
  std::string Operation() const override { return "Leaf"; }
};

#endif // LEAF_HPP