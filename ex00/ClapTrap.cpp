#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default Name"),  _hpoints(10), _epoints(10), _damage(0) {
    std::cout << "Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hpoints(10), _epoints(10), _damage(0) {
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hpoints(other._hpoints), _epoints(other._epoints), _damage(other._damage) {
    std::cout << "Copy constructor called" << std::endl;
};

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        _name = other._name;
        _hpoints = other._hpoints;
        _epoints = other._epoints;
        _damage = other._damage;
    }
    std::cout << "ClapTrap Assignment Operator Called!" << std::endl;
    return (*this);
};

void ClapTrap::attack(const std::string& target) {
    if (_epoints > 0 && _hpoints > 0) {
        _epoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _name << " has " << _hpoints << " hit points ";
        std::cout << "and " << _epoints << " energy points left. Game over!" << std::endl;
    }
};

void ClapTrap::takeDamage(unsigned int amount) {
    _hpoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount) {
    if (_epoints > 0 && _hpoints > 0) {
        _epoints -= 1;
        _hpoints += amount;
        std::cout << "ClapTrap " << _name << " repairs itself, it gains " << amount << " hit points." << std::endl; 
    }
    else {
        std::cout << "ClapTrap " << _name << " has " << _hpoints << " hit points ";
        std::cout << "and " << _epoints << " energy points left. Game over!" << std::endl;
    }
};

// getters
std::string ClapTrap::getName() const {
    return _name;
};

int ClapTrap::getHitPoints() const {
    return _hpoints;
};

int ClapTrap::getEnergyPoints() const {
    return _epoints;
};

int ClapTrap::getAttackDamage() const {
    return _damage;
};

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor Called!" << std::endl;
};
