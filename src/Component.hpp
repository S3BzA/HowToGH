#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>

/**
 * @brief Abstract base class for components in the composite pattern.
 * 
 * This class defines the interface for all components in the composite pattern.
 * It includes methods for setting and getting the parent component, as well as
 * methods for adding, removing, and checking if a component is a composite.
 * It also includes a pure virtual method for performing an operation.
 */
class Component {
protected:
  /**
   * @brief Pointer to the parent component.
   * 
   * This member variable stores a pointer to the parent component in the composite structure.
   */
  Component *parent_;

public:
  /**
   * @brief Virtual destructor.
   * 
   * This virtual destructor ensures that derived classes can be properly cleaned up.
   */
  virtual ~Component() {}

  /**
   * @brief Sets the parent component.
   * 
   * This method sets the parent component of the current component.
   * 
   * @param parent A pointer to the parent component.
   */
  void SetParent(Component *parent) { this->parent_ = parent; }

  /**
   * @brief Gets the parent component.
   * 
   * This method returns a pointer to the parent component of the current component.
   * 
   * @return A pointer to the parent component.
   */
  Component *GetParent() const { return this->parent_; }

  /**
   * @brief Adds a component to the current component.
   * 
   * This method is a placeholder for adding a component to the current component.
   * It is intended to be overridden by derived classes.
   * 
   * @param component A pointer to the component to be added.
   */
  virtual void Add(Component *component) {}

  /**
   * @brief Removes a component from the current component.
   * 
   * This method is a placeholder for removing a component from the current component.
   * It is intended to be overridden by derived classes.
   * 
   * @param component A pointer to the component to be removed.
   */
  virtual void Remove(Component *component) {}

  /**
   * @brief Checks if the component is a composite.
   * 
   * This method returns false by default, indicating that the component is not a composite.
   * It is intended to be overridden by derived classes.
   * 
   * @return true if the component is a composite, false otherwise.
   */
  virtual bool IsComposite() const { return false; }

  /**
   * @brief Performs an operation on the component.
   * 
   * This pure virtual method must be implemented by derived classes to perform an operation on the component.
   * 
   * @return A string representing the result of the operation.
   */
  virtual std::string Operation() const = 0;
};

#endif // COMPONENT_HPP