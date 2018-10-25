/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 09:23:20 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/04 11:04:02 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fixedPoint;
        static int const _fractBits;
    public:
        Fixed( void );
        Fixed( const Fixed &copy);
        ~Fixed( void );
        void operator = (const Fixed &copy ); 
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif