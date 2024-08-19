#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>

/**
 * The base componenet class for using composite pattern root of the tree
 * @class Component
 * @author Michael
 */
class Component {
protected:
  Component *parent_;

public:
  virtual ~Component() {}
  void SetParent(Component *parent) { this->parent_ = parent; }
  Component *GetParent() const { return this->parent_; }
  /**
   * Used to add and remove children from the composite
   * @param component
   * @return void
   * @note This is a pure virtual function
   * 
   */
  virtual void Add(Component *component) {}
  virtual void Remove(Component *component) {}
  virtual bool IsComposite() const { return false; }
  virtual std::string Operation() const = 0;
};

#endif // COMPONENT_HPP