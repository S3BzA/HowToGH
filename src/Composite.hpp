#ifndef COMPOSITE_HPP
#define COMPOSITE_HPP

#include <list>
#include <string>
#include "Component.hpp"

class Composite : public Component {
protected:
  std::list<Component *> children_;

public:
  void Add(Component *component) override;
  void Remove(Component *component) override;
  bool IsComposite() const override;
  std::string Operation() const override;
};

#endif // COMPOSITE_HPP