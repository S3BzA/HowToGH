#ifndef COMPOSITE_HPP
#define COMPOSITE_HPP

#include <list>
#include <string>
#include "Component.hpp"

/**
 * @class Composite
 * @brief Composite class in the composite pattern.
 * 
 * This class represents a composite component that can have children components.
 * It inherits from the Component class and implements methods for adding, removing,
 * and performing operations on child components.
 *
 * @implements Component
 * 
 * @ingroup CompositePattern
 * 
 * @version 1.0
 * 
 * @see Component
 * @todo Add more detailed error handling.
 * 
 * @warning Ensure that child components are properly managed to avoid memory leaks.
 * 
 * @note This class is part of the Composite design pattern implementation.
 */
class Composite : public Component {
protected:
  /**
   * @brief List of child components.
   * 
   * This member variable stores a list of pointers to the child components of the composite.
   */
  std::list<Component *> children_;

public:
  /**
   * @brief Adds a component to the composite.
   * 
   * This method adds a component to the list of children of the composite.
   * It also sets the parent of the added component to this composite.
   * 
   * @param component A pointer to the component to be added.
   */
  void Add(Component *component) override;

  /**
   * @brief Removes a component from the composite.
   * 
   * This method removes a component from the list of children of the composite.
   * It also sets the parent of the removed component to nullptr.
   * 
   * @param component A pointer to the component to be removed.
   */
  void Remove(Component *component) override;

  /**
   * @brief Checks if the component is a composite.
   * 
   * This method always returns true for Composite objects.
   * 
   * @return true Always returns true.
   */
  bool IsComposite() const override;

  /**
   * @brief Performs an operation on the composite.
   * 
   * This method performs an operation on the composite and its children.
   * It concatenates the results of the operations of its children, separated by a plus sign.
   * The final result is wrapped in "Branch()".
   * 
   * @return A string representing the result of the operation.
   */
  std::string Operation() const override;
};

#endif // COMPOSITE_HPP