#include <iostream>

#include <ClapTrap.hpp>

#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl

void  NormalTest(void) {
  HEADER();
  ClapTrap a("hoge");

  a.attack("fuga");
  a.takeDamage(10);
  a.beRepaired(10);
}

void  CanonicalTest(void) {
  HEADER();

  ClapTrap a("hoge");
  ClapTrap b(a);
  ClapTrap c;
  ClapTrap d("fuga");
  c = b;
}

int main( void ) {

  NormalTest();
  CanonicalTest();
  return 0;
}
