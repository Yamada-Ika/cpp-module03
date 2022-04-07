#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public virtual ClapTrap {
  protected:
    const int kDefaultHitpoints;
    const int kDefaultEnergy_points;
    const int kDefaultAttack_damage;

 public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    virtual ~FragTrap(void);
    FragTrap& operator=(const FragTrap& other);
    virtual void attack(std::string const &target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
    void highFivesGuys(void);
};

#endif
