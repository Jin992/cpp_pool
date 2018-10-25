/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 18:18:14 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/09 19:58:54 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.hpp"

class Ship : public GameEntity
{
public:
	Ship(void);
	Ship(char *c);
	Ship(Ship const & obj);
	Ship & operator=(Ship const & src);
	~Ship(void);
	void initBullets(GameEntity bulletArr[]);
	void shoot(GameEntity bulletArr[]);
};

#endif
