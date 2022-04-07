#ifndef CRAPTRAP_HPP
# define CRAPTRAP_HPP

# include <string>

class ClapTrap {
 protected:
    std::string Name_;
    unsigned int Hitpoints_;
    unsigned int Energy_points_;
    unsigned int Attack_damage_;
    bool isDead(void);
    bool isEmpty(void);

 public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    virtual ~ClapTrap(void);
    ClapTrap& operator=(const ClapTrap& other);
    virtual void attack(std::string const &target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
};

#endif
