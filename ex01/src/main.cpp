#include <iostream>

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl

void  NormalTest(void) {
  HEADER();
  ScavTrap a("hoge");

  a.attack("fuga");
  a.takeDamage(10);
  a.beRepaired(10);
}

void  CanonicalTest(void) {
  HEADER();

  ScavTrap a("hoge");
  ScavTrap b(a);
  ScavTrap c;
  ScavTrap d("fuga");
  c = b;
}

int main( void ) {
  NormalTest();
  CanonicalTest();
  return 0;
}
