#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

// TODO
// Name (Parameter of constructor)
// • Claptrap::Name (Parameter of constructor + "_clap_name")
// • attack (Scavtrap)

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& other);
    ~DiamondTrap(void);
    DiamondTrap& operator=(const DiamondTrap& other);
    void attack(std::string const &target);
};

#endif
