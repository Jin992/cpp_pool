#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {

    FragTrap player1("default");

    srand((unsigned int) time(NULL));

    {

        FragTrap player2("r0");

        std::cout << "\033[1;44m";
        std::cout << player1.getName() << " starts off with " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << player2.getName() << " starts off with " << player2.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "\033[0m";

        player1.beRepaired(20);

        player1.meleeAttack(player2.getName());

        player2.beRepaired(100);

        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        player1.takeDamage(player1.getRangedAttackDamage());

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        FragTrap player2(player1);

        player2.setName("r1");

        std::cout << "\033[1;44m";
        std::cout << player1.getName() << " starts off with " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << player2.getName() << " starts off with " << player2.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "\033[0m";

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        player1.takeDamage(player1.getRangedAttackDamage());

        std::cout << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        FragTrap player2 = player1;
        player2.setName("r2");

        std::cout << "\033[1;44m";
        std::cout << player1.getName() << " starts off with " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << player2.getName() << " starts off with " << player2.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "\033[0m";

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << player1.getName() << " has " << player1.getEnergyPoints() << " energy points" << std::endl;
        std::cout << player2.getName() << " has " << player2.getEnergyPoints() << " energy points" << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << player1.getName() << " has " << player1.getEnergyPoints() << " energy points" << std::endl;
        std::cout << player2.getName() << " has " << player2.getEnergyPoints() << " energy points" << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << player1.getName() << " has " << player1.getEnergyPoints() << " energy points" << std::endl;
        std::cout << player2.getName() << " has " << player2.getEnergyPoints() << " energy points" << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        FragTrap player2;

        player2.setName("r3");
        std::cout << "\033[1;44m";
        std::cout << player1.getName() << " starts off with " << player1.getEnergyPoints() << " energy points, "
                  << " hit points " << player1.getHitPoints() << std::endl;
        std::cout << player2.getName() << " starts off with " << player2.getEnergyPoints() << " energy points, "
                  << " hit points " << player2.getHitPoints() << std::endl;
        std::cout << "\033[0m";

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getRangedAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.beRepaired(20);
        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());
        player2.takeDamage(player2.getRangedAttackDamage());

        std::cout << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    ScavTrap splayer1("r0");

    {
        ScavTrap splayer2("Andre");
        std::cout << "SC4V-TP: " << splayer1.getName() << " start off with " << splayer1.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << splayer2.getHitPoints() << std::endl;

        splayer1.meleeAttack(splayer2.getName());

        splayer2.takeDamage(splayer2.getMeleeAttackDamage());

        splayer2.rangedAttack(splayer1.getName());

        splayer1.takeDamage(splayer1.getRangedAttackDamage());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints()
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints()
                  << std::endl;

        splayer1.challengeNewcomer(splayer2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        ScavTrap splayer2(splayer1);

        splayer2.setName("r1");

        std::cout << "SC4V-TP: " << splayer1.getName() << " starts off with " << splayer1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points" << std::endl;

        splayer1.meleeAttack(splayer2.getName());

        splayer2.takeDamage(splayer2.getMeleeAttackDamage());

        splayer2.rangedAttack(splayer1.getName());

        splayer1.takeDamage(splayer1.getRangedAttackDamage());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints()
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints()
                  << std::endl;

        splayer1.challengeNewcomer(splayer2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        ScavTrap splayer2 = splayer1;
        splayer2.setName("r2");

        std::cout << "SC4V-TP: " << splayer1.getName() << " starts off with " << splayer1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points" << std::endl;

        splayer2.challengeNewcomer(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " has " << splayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " has " << splayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        splayer2.challengeNewcomer(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " has " << splayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " has " << splayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        splayer2.challengeNewcomer(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " has " << splayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " has " << splayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        ScavTrap splayer2;

        splayer2.setName("r3");
        std::cout << "SC4V-TP: " << splayer1.getName() << " starts off with " << splayer1.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << splayer2.getHitPoints() << std::endl;

        splayer1.challengeNewcomer(splayer2.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints()
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints()
                  << std::endl;

        splayer1.meleeAttack(splayer2.getName());

        splayer2.takeDamage(splayer2.getMeleeAttackDamage());
        splayer2.takeDamage(splayer2.getMeleeAttackDamage());
        splayer2.takeDamage(splayer2.getMeleeAttackDamage());
        splayer2.takeDamage(splayer2.getMeleeAttackDamage());

        splayer2.rangedAttack(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints()
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints()
                  << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    NinjaTrap nPlayer1("rN0");

    {
        NinjaTrap nPlayer2("Andre");
        std::cout << "NINJA-TP: " << nPlayer1.getName() << " start off with " << nPlayer1.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << nPlayer1.getHitPoints() << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " starts off with " << nPlayer2.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << nPlayer2.getHitPoints() << std::endl;

        nPlayer1.meleeAttack(nPlayer2.getName());

        nPlayer2.takeDamage(nPlayer2.getMeleeAttackDamage());

        nPlayer2.rangedAttack(nPlayer1.getName());

        nPlayer1.takeDamage(nPlayer1.getRangedAttackDamage());

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " current hit points " << nPlayer1.getHitPoints()
                  << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " current hit points " << nPlayer2.getHitPoints()
                  << std::endl;

        nPlayer1.ninjaShoebox(nPlayer2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        NinjaTrap nPlayer2(nPlayer1);

        nPlayer2.setName("rN1");

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " starts off with " << nPlayer1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " starts off with " << nPlayer2.getEnergyPoints()
                  << " energy points" << std::endl;

        nPlayer1.meleeAttack(nPlayer2.getName());

        nPlayer2.takeDamage(nPlayer2.getMeleeAttackDamage());

        nPlayer2.rangedAttack(nPlayer1.getName());

        nPlayer1.takeDamage(nPlayer1.getRangedAttackDamage());

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " current hit points " << nPlayer1.getHitPoints()
                  << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " current hit points " << nPlayer2.getHitPoints()
                  << std::endl;

        nPlayer1.ninjaShoebox(nPlayer2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        NinjaTrap nPlayer2 = nPlayer1;
        nPlayer2.setName("rN2");

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " starts off with " << nPlayer1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " starts off with " << nPlayer2.getEnergyPoints()
                  << " energy points" << std::endl;

        nPlayer2.ninjaShoebox(nPlayer1.getName());

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " has " << nPlayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " has " << nPlayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        nPlayer2.ninjaShoebox(nPlayer1.getName());

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " has " << nPlayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " has " << nPlayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        nPlayer2.ninjaShoebox(nPlayer1.getName());

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " has " << nPlayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " has " << nPlayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        FragTrap nPlayer2;

        nPlayer2.setName("rN3");
        std::cout << "NINJA-TP: " << nPlayer1.getName() << " starts off with " << nPlayer1.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << nPlayer1.getHitPoints() << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " starts off with " << nPlayer2.getEnergyPoints()
                  << " energy points, "
                  << " hit points " << nPlayer2.getHitPoints() << std::endl;

        nPlayer1.ninjaShoebox(nPlayer2.getName());

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " current hit points " << nPlayer1.getHitPoints()
                  << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " current hit points " << nPlayer2.getHitPoints()
                  << std::endl;

        nPlayer1.meleeAttack(nPlayer2.getName());

        nPlayer2.takeDamage(nPlayer2.getMeleeAttackDamage());
        nPlayer2.takeDamage(nPlayer2.getMeleeAttackDamage());
        nPlayer2.takeDamage(nPlayer2.getMeleeAttackDamage());
        nPlayer2.takeDamage(nPlayer2.getMeleeAttackDamage());

        nPlayer2.rangedAttack(nPlayer1.getName());

        std::cout << "NINJA-TP: " << nPlayer1.getName() << " current hit points " << nPlayer1.getHitPoints()
                  << std::endl;
        std::cout << "NINJA-TP: " << nPlayer2.getName() << " current hit points " << nPlayer2.getHitPoints()
                  << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;

        ClapTrap ovalC("Parent");
        FragTrap ovalF("Frag");
        ScavTrap ovalS("Scavenger");
        NinjaTrap ovalN("Ninja");

        ovalN.ninjaShoebox(ovalC);
        ovalN.ninjaShoebox(ovalF);
        ovalN.ninjaShoebox(ovalS);
        ovalN.ninjaShoebox(ovalN);

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    return (0);
}