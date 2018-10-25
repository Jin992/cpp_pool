/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 12:47:23 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/05 21:53:48 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

class ScavTrap : public ClapTrap {

public:
    ScavTrap(void);

    ScavTrap(std::string);

    ScavTrap(ScavTrap const &);

    ScavTrap &operator=(ScavTrap const &);

    ~ScavTrap(void);

    void challengeNewcomer(std::string const &target);
};

#endif
