#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap Guiliermo("Guiliermo");
    ScavTrap Nolan("Nolan");

    Guiliermo.attack(Nolan.getName());
    Nolan.takeDamage(Guiliermo.getAttackDamage());

    Nolan.beRepaired(3);
    Guiliermo.attack(Nolan.getName());
    Nolan.takeDamage(Guiliermo.getAttackDamage());

    return (0);
}