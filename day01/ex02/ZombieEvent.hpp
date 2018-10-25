/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:19:07 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 11:50:36 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string		type;

public:
	ZombieEvent();
	~ZombieEvent();

	Zombie* newZombie(std::string name);
	void	setZombieType(std::string type);
	void	randomChump();
	
};