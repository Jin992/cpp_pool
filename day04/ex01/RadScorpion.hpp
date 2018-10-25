/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:02:57 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 18:18:12 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_RADSCORPION_HPP
#define PISCINE_CPP_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion :public Enemy
{
public:
    RadScorpion(void);
    ~RadScorpion(void);
    RadScorpion(RadScorpion const & src);
    RadScorpion &operator=(RadScorpion const & rhs);
};

#endif
