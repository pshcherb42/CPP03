#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
};
FragTrap::FragTrap(std::string const& name) : ClapTrap(name) {
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
};

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;

};

FragTrap& FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap Assignment Operator Called!" << std::endl;
    return (*this);
};

void FragTrap::attack(const std::string& target) {
    if (_epoints > 0 && _hpoints > 0) {
        _epoints -= 1;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    }
    else {
        std::cout << "FragTrap " << _name << " has " << _hpoints << " hit points ";
        std::cout << "and " << _epoints << " energy points left. Game over!" << std::endl;
    }
};
void FragTrap::highFivesGuys(void) {
    std::cout << "Gimme five!" << std::endl;
};

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor Called!" << std::endl;
};