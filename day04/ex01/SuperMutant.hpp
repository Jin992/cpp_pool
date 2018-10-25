/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:28:01 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 18:19:01 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_SUPERMUTANT_HPP
#define PISCINE_CPP_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:

    SuperMutant(void);
    ~SuperMutant(void);
    SuperMutant(SuperMutant const & src);
    SuperMutant     &operator=(SuperMutant const & rhs);

    virtual void    takeDamage(int amount);
};

#endif
