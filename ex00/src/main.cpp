#include <iostream>

#include <ClapTrap.hpp>

#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl

void  NormalTest(void) {
  HEADER();
  ClapTrap a("hoge");

  a.attack("fuga");
  a.takeDamage(5);
  a.beRepaired(10);
  for (int i = 0; i < 10; i++) {
     a.beRepaired(10);
  }
  a.takeDamage(1000);
  a.attack("hoge");
  a.takeDamage(0);
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
