#pragma once

#include "Element.h"

#include <string>

class Div : public Element
{
public:
  std::string render() const override;
};
