/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 16:07:01 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 18:08:37 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PISCINE_CPP_POWERFIST_HPP
#define PISCINE_CPP_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
    PowerFist(void);

    ~PowerFist(void);

    PowerFist(PowerFist const &src);

    PowerFist &operator=(PowerFist const &rhs);

    void attack() const;

private:
    std::string _name;
};

#endif
