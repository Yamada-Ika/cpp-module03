#include <iostream>

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl

void NormalTest(void) {
    HEADER();
    ScavTrap a("hoge");

    a.attack("fuga");
    a.guardGate();
}

void CanonicalTest(void) {
    HEADER();

    ScavTrap a("hoge");
    ScavTrap b(a);
    ScavTrap c;
    ScavTrap d("fuga");
    c = b;
}

void ConstructorAndDestructorTest(void) {
    HEADER();

    ScavTrap s("hoge");
}

void BeRepairedAndTakeDamageTest(void) {
    HEADER();

    ScavTrap s("hoge");
    s.beRepaired(100);
    s.takeDamage(100);
}

void AttackMessageTest(void) {
    HEADER();

    ScavTrap s("hoge");
    s.attack("fuga");
}

void GuardGateTest(void) {
    HEADER();

    ScavTrap s("hoge");
    s.guardGate();
}

int main(void) {
    NormalTest();
    CanonicalTest();
    ConstructorAndDestructorTest();
    AttackMessageTest();
    BeRepairedAndTakeDamageTest();
    GuardGateTest();
    return 0;
}
