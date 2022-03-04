#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public virtual ClapTrap {
  protected:
    const int kDefaultHitpoints = 100;
    const int kDefaultEnergy_points = 100;
    const int kDefaultAttack_damage = 30;

 public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap(void);
    FragTrap& operator=(const FragTrap& other);
    void highFivesGuys(void);
};

#endif
