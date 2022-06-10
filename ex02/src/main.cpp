#include <iostream>

#include <FragTrap.hpp>

#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl

void CanonicalTest(void) {
    HEADER();

    FragTrap a("hoge");
    FragTrap b(a);
    FragTrap c;
    FragTrap d("fuga");
    c = b;
}

void ConstructorAndDestructorTest(void) {
    HEADER();

    FragTrap s("hoge");
}

void AttackAndBeRepairedAndTakeDamageTest(void) {
    HEADER();

    FragTrap s("hoge");
    s.attack("fuga");
    s.beRepaired(100);
    s.takeDamage(100);
}

void GuardGateTest(void) {
    HEADER();

    FragTrap s("hoge");
    s.highFivesGuys();
}

int main(void) {
    CanonicalTest();
    ConstructorAndDestructorTest();
    AttackAndBeRepairedAndTakeDamageTest();
    GuardGateTest();
    return 0;
}
