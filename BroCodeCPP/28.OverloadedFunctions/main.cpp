#include <iostream>

void bakedPizza();
void bakedPizza(std::string topping1);
void bakedPizza(std::string topping1, std::string topping2);

int main()
{
  bakedPizza();
  bakedPizza("Pepperoni");
  bakedPizza("Pepperoni", "Mushroom");

  return 0;
}

void bakedPizza(){
  std::cout << "Here is your a pizza\n";
}

void bakedPizza(std::string topping1){
  std::cout << "Here is your " << topping1 <<" pizza\n";
}

void bakedPizza(std::string topping1, std::string topping2){
  std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza\n";
}

