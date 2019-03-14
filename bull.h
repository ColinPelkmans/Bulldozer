#pragma once
#include <string>

class Bull
{
private:
  int weight;
  int liftCapacity;
  std::string name;

public:
  Bull(int weight, int liftCapacity, std::string name);
  void set_capacity(int liftCapacity);
  void set_weight(int weight);
  void set_name(std::string name);

public:
  std::string to_string(void);
};
