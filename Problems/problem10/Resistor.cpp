#include "Resistor.hpp"

void Resistor::set_value(double r)
{
  if (r < 0)
  {
    std::invalid_argument("negative resistance");
  }
  else
  {
    Component::set_value(r);
  }
}

double Resistor::get_current() const
{
  if (Resistor::get_value() == 0)
  {
    std::logic_error("Can't divide by zero");
  }
  else
  {
    return Resistor::get_voltage() / Resistor::get_value();
  }
}