/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:04:47 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 12:37:24 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde {
private:
    Zombie *_zombies;
    int _N;

public:
    ZombieHorde(int N);

    ~ZombieHorde();

    void announce();

};