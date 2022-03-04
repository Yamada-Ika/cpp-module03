#include "DiamondTrap.hpp"
#include "Fragtrap.hpp"
#include "Scavtrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void) {
  std::cout << "DiamondTrap default constructor called" << std::endl;
  Name_ = "";
  Hitpoints_ = FragTrap::kDefaultHitpoints;
  Energy_points_ = Scavtrap::kDefaultEnergy_points;
  Attack_damage_ = FragTrap::kDefaultAttack_damage;
}

DiamondTrap::DiamondTrap(std::string name) {
  std::cout << "DiamondTrap default constructor called" << std::endl;
  Name_ = name;
  Hitpoints_ = FragTrap::kDefaultHitpoints;
  Energy_points_ = Scavtrap::kDefaultEnergy_points;
  Attack_damage_ = FragTrap::kDefaultAttack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
  std::cout << "DiamondTrap copy constructor called" << std::endl;
  *this = other;
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  std::cout << "DiamondTrap assignation operator called" << std::endl;
  if (this != &other) {
    this->Name_ = other.Name_;
    this->Hitpoints_ = other.Hitpoints_;
    this->Energy_points_ = other.Energy_points_;
    this->Attack_damage_ = other.Attack_damage_;
  }
  return *this;
}

