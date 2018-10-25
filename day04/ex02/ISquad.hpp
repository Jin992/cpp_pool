/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:01:21 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 22:10:16 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual                 ~ISquad(){}
    virtual int             getCount() const = 0;
    virtual ISpaceMarine*   getUnit(int) const = 0;
    virtual int             push(ISpaceMarine*) = 0;
};

#endif
