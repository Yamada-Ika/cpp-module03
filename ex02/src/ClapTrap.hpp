#ifndef CRAPTRAP_HPP
# define CRAPTRAP_HPP

# include <string>

class ClapTrap {
 protected:
    std::string Name_;
    unsigned int Hitpoints_;
    unsigned int Energy_points_;
    unsigned int Attack_damage_;

 public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ~ClapTrap(void);
    ClapTrap& operator=(const ClapTrap& other);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
