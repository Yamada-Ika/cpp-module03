#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public virtual ClapTrap {
  protected:
    const int kDefaultHitpoints;
    const int kDefaultEnergy_points;
    const int kDefaultAttack_damage;

 public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    virtual ~ScavTrap(void);
    ScavTrap& operator=(const ScavTrap& other);
    virtual void attack(std::string const &target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
    void guardGate(void);
};

#endif
