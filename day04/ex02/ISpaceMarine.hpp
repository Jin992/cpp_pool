/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 18:30:37 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 22:14:36 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
public:

    virtual         ~ISpaceMarine(void){}
    virtual         ISpaceMarine* clone(void) const = 0;
    virtual void    battleCry(void) const = 0;
    virtual void    rangedAttack(void) const = 0;
    virtual void    meleeAttack(void) const = 0;

};

#endif
