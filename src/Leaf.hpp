#ifndef LEAF_HPP
#define LEAF_HPP

#include "Component.hpp"

/**
 * @class Leaf
 * @brief Leaf class in the composite pattern.
 *
 * This class represents a leaf component in the composite pattern.
 * A leaf is an end object of a composition that does not have any children.
 * It inherits from the Component class and implements the Operation method.
 *
 * @implements Component
 *
 * @ingroup CompositePattern
 *
 * @version 1.0
 *
 * @see Component
 * @todo Extend functionality if needed.
 *
 * @warning Ensure that the leaf components are properly managed to avoid memory
 * leaks.
 *
 * @note This class is part of the Composite design pattern implementation.
 */
class Leaf : public Component {
public:
  /**
   * @brief Performs an operation on the leaf.
   *
   * This method performs an operation specific to the leaf component.
   * It returns a string indicating that this is a leaf.
   *
   * @return A string representing the result of the operation.
   */
  std::string Operation() const override { return "Leaf"; }
};

#endif // LEAF_HPP