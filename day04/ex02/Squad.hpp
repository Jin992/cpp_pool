/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:41:09 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 22:25:52 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
public:
    Squad(void);
    ~Squad(void);
    Squad(Squad const & src);
    Squad &operator=(Squad const & rhs);

    int             getCount(void) const;
    ISpaceMarine    *getUnit(int n) const;
    int             push(ISpaceMarine *unit);

private:
    struct _sUnit
    {
        int index;
        ISpaceMarine *marine;
        struct _sUnit *next;
    };
    struct _sUnit *list;

};

#endif
