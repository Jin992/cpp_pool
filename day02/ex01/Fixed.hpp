/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 09:23:20 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/04 12:51:37 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {
private:
    int _fixedPoint;
    static int const _fractBits;

public:
    Fixed(void);

    Fixed(const Fixed &copy);

    Fixed(const int val);

    Fixed(const float val);

    ~Fixed(void);

    void operator=(const Fixed &copy);

    int getRawBits(void) const;

    void setRawBits(int const raw);

    float toFloat(void) const;

    int toInt(void) const;
};

//outside of class because it requires the friend modifier when in a class.
std::ostream &operator<<(std::ostream &output, const Fixed &f);

#endif