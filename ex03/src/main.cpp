#include <iostream>

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include "FragTrap.hpp"

#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl

void  NormalTest(void) {
  HEADER();
  FragTrap a("hoge");

  a.attack("fuga");
  a.takeDamage(10);
  a.beRepaired(10);
  a.highFivesGuys();
}

void  CanonicalTest(void) {
  HEADER();

  FragTrap a("hoge");
  FragTrap b(a);
  FragTrap c;
  FragTrap d("fuga");
  c = b;
}

int main( void ) {
  NormalTest();
  // CanonicalTest();
  return 0;
}
