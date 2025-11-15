#pragma once

#include <memory>
#include <string>
#include <vector>

class Element
{
public:
  virtual std::string render() const = 0;

private:
  std::vector<std::unique_ptr<Element>> children;
};
