/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:03:21 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/05 12:34:53 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <cstdlib>

class FragTrap {

private:
    std::string _name;
    int _hit_points;
    int _max_hit_points;
    int _energy_points;
    int _max_energy_points;
    int _level;
    int _melee_attack_damage;
    int _ranged_attack_damage;
    int _armor_damage_reduction;

public:

    FragTrap(void);

    FragTrap(std::string);

    FragTrap(FragTrap const &);

    FragTrap &operator=(FragTrap const &);

    ~FragTrap(void);

    int getHitPoints(void) const;

    int getMaxHitPoints(void) const;

    int getEnergyPoints(void) const;

    int getMaxEnergyPoints(void) const;

    int getLevel(void) const;

    int getMeleeAttackDamage(void) const;

    int getRangedAttackDamage(void) const;

    int getArmorDamageReduction(void) const;

    std::string getName(void) const;

    void setName(std::string);


    void rangedAttack(std::string const &target);

    void meleeAttack(std::string const &target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(std::string const &target);

};

#endif