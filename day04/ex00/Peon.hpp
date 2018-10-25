/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 09:05:02 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 10:31:02 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_PEON_HPP
#define PISCINE_CPP_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
    Peon(std::string);
    Peon(Peon const &);
    Peon &operator=(Peon const &);
    ~Peon();
    void birth(void);
    virtual void getPolymorphed() const;
};


#endif 
