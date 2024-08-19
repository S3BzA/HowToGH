#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>

class Component {
protected:
  Component *parent_;

public:
  virtual ~Component() {}
  void SetParent(Component *parent) { this->parent_ = parent; }
  Component *GetParent() const { return this->parent_; }
  virtual void Add(Component *component) {}
  virtual void Remove(Component *component) {}
  virtual bool IsComposite() const { return false; }
  virtual std::string Operation() const = 0;
};

#endif // COMPONENT_HPP