#include "Composite.hpp"

/**
 * @brief Adds a component to the composite.
 * 
 * This method adds a component to the list of children of the composite.
 * It also sets the parent of the added component to this composite.
 * 
 * @param component A pointer to the component to be added.
 */
void Composite::Add(Component *component) {
  this->children_.push_back(component);
  component->SetParent(this);
}

/**
 * @brief Removes a component from the composite.
 * 
 * This method removes a component from the list of children of the composite.
 * It also sets the parent of the removed component to nullptr.
 * 
 * @param component A pointer to the component to be removed.
 */
void Composite::Remove(Component *component) {
  children_.remove(component);
  component->SetParent(nullptr);
}

/**
 * @brief Checks if the component is a composite.
 * 
 * This method always returns true for Composite objects.
 * 
 * @return true Always returns true.
 */
bool Composite::IsComposite() const {
  return true;
}

/**
 * @brief Performs an operation on the composite.
 * 
 * This method performs an operation on the composite and its children.
 * It concatenates the results of the operations of its children, separated by a plus sign.
 * The final result is wrapped in "Branch()".
 * 
 * @return A string representing the result of the operation.
 */
std::string Composite::Operation() const {
  std::string result;
  for (const Component *c : children_) {
    if (c == children_.back()) {
      result += c->Operation();
    } else {
      result += c->Operation() + "+";
    }
  }
  return "Branch(" + result + ")";
}