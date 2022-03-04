#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap {
 public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap(void);
    ScavTrap& operator=(const ScavTrap& other);
    void attack(std::string const &target);
    void guardGate(void);
};

#endif
