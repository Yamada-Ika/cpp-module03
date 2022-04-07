#include <iostream>

#include "DiamondTrap.hpp"

#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl

void  NormalTest(void) {
  HEADER();
  DiamondTrap a("hoge");

  a.attack("fuga");
  // a.takeDamage(10);
  // a.beRepaired(10);
  // a.highFivesGuys();
}

// void  CanonicalTest(void) {
//   HEADER();

//   DiamondTrap a("hoge");
//   DiamondTrap b(a);
//   DiamondTrap c;
//   DiamondTrap d("fuga");
//   c = b;
// }

int main( void ) {
  NormalTest();
  // CanonicalTest();
  return 0;
}
