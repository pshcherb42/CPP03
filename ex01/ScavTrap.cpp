#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hpoints = 100;
    _epoints = 50;
    _damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
};

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
    _hpoints = 100;
    _epoints = 50;
    _damage = 20;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        _name = other._name;
        _hpoints = other._hpoints;
        _epoints = other._epoints;
        _damage = other._damage;
    }
    std::cout << "ScavTrap Assignment Operator Called!" << std::endl;
    return (*this);
};

void ScavTrap::attack(const std::string& target) {
    if (_epoints > 0 && _hpoints > 0) {
        _epoints -= 1;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    }
    else {
        std::cout << "ScavTrap " << _name << " has " << _hpoints << " hit points ";
        std::cout << "and " << _epoints << " energy points left. Game over!" << std::endl;
    }
};

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
};

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor Called!" << std::endl;
};
