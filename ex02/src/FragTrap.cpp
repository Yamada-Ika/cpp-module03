#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(void) {
  std::cout << "FragTrap default constructor called" << std::endl;
  Name_ = "";
  Hitpoints_ = 100;
  Energy_points_ = 100;
  Attack_damage_ = 30;
}

FragTrap::FragTrap(std::string name) {
  std::cout << "FragTrap default constructor called" << std::endl;
  Name_ = name;
  Hitpoints_ = 100;
  Energy_points_ = 100;
  Attack_damage_ = 30;
}

FragTrap::FragTrap(const FragTrap& other) {
  std::cout << "FragTrap copy constructor called" << std::endl;
  *this = other;
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << "FragTrap assignation operator called" << std::endl;
  if (this != &other) {
    this->Name_ = other.Name_;
    this->Hitpoints_ = other.Hitpoints_;
    this->Energy_points_ = other.Energy_points_;
    this->Attack_damage_ = other.Attack_damage_;
  }
  return *this;
}

void FragTrap::attack(std::string const &target) {
  if (isDead()) {
    std::cout << "FragTrap " + this->Name_ + " cannot do anything!" << std::endl;
    return;
  }
  std::cout << "FragTrap " + this->Name_ + " attack " + target + ", causing ";
  std::cout << this->Attack_damage_ << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
  unsigned int prev_Hitpoints_;

  prev_Hitpoints_ = Hitpoints_;
  Hitpoints_ -= amount;
  if (Hitpoints_ > prev_Hitpoints_)
    Hitpoints_ = 0;
  std::cout << "FragTrap " + this->Name_ + " take " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
  unsigned int prev_Hitpoints_;

  if (isEmpty() || isDead()) {
    std::cout << "FragTrap " + this->Name_ + " cannot do anything!" << std::endl;
    return;
  }
  prev_Hitpoints_ = Hitpoints_;
  Hitpoints_ += amount;
  if (Hitpoints_ < prev_Hitpoints_)
    Hitpoints_ = UINT_MAX;
  std::cout << "FragTrap " + this->Name_ + " repaired " << amount << " hitpoints!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap request a positive high fives" << std::endl;
}
