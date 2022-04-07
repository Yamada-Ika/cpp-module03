#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void) : name_("") {
  std::cout << "DiamondTrap default constructor called" << std::endl;
  Name_ = name_ + "_clap_name";
  Hitpoints_ = FragTrap::kDefaultHitpoints;
  Energy_points_ = ScavTrap::kDefaultEnergy_points;
  Attack_damage_ = FragTrap::kDefaultAttack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : name_(name) {
  std::cout << "DiamondTrap default constructor called" << std::endl;
  Name_ = name_ + "_clap_name";
  Hitpoints_ = FragTrap::kDefaultHitpoints;
  Energy_points_ = ScavTrap::kDefaultEnergy_points;
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
    this->name_ = other.Name_;
    this->Hitpoints_ = other.Hitpoints_;
    this->Energy_points_ = other.Energy_points_;
    this->Attack_damage_ = other.Attack_damage_;
  }
  return *this;
}

void DiamondTrap::attack(std::string const &target) {
  ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
  unsigned int prev_Hitpoints_;

  prev_Hitpoints_ = Hitpoints_;
  Hitpoints_ -= amount;
  if (Hitpoints_ > prev_Hitpoints_)
    Hitpoints_ = 0;
  std::cout << "DiamondTrap " + this->Name_ + " take " << amount << " points of damage!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
  unsigned int prev_Hitpoints_;

  if (isEmpty() || isDead()) {
    std::cout << "DiamondTrap " + this->Name_ + " cannot do anything!" << std::endl;
    return;
  }
  prev_Hitpoints_ = Hitpoints_;
  Hitpoints_ += amount;
  if (Hitpoints_ < prev_Hitpoints_)
    Hitpoints_ = UINT_MAX;
  std::cout << "DiamondTrap " + this->Name_ + " repaired " << amount << " hitpoints!" << std::endl;
}

void DiamondTrap::whoAmI(void) {
  std::cout << "DiamondTrap : name_" + this->name_ << "ClapTrap::name" << this->Name_ << std::endl;
}

