/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:15:24 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/05 21:51:02 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
    NinjaTrap(void);

    NinjaTrap(std::string);

    NinjaTrap(NinjaTrap const &);

    NinjaTrap &operator=(NinjaTrap const &);

    ~NinjaTrap(void);

    void ninjaShoebox(std::string const &target);

    void ninjaShoebox(ClapTrap const &target);

    void ninjaShoebox(FragTrap const &target);

    void ninjaShoebox(ScavTrap const &target);

    void ninjaShoebox(NinjaTrap const &target);
};

#endif