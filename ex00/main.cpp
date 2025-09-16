#include "ClapTrap.hpp"

int main() {
    ClapTrap Guiliermo("Guiliermo");
    ClapTrap Nolan("Nolan");

    Guiliermo.attack(Nolan.getName());
    Nolan.takeDamage(Guiliermo.getAttackDamage());

    Nolan.beRepaired(3);
    Guiliermo.attack(Nolan.getName());
    Nolan.takeDamage(Guiliermo.getAttackDamage());

    return (0);
}