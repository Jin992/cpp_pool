/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 12:40:19 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/09 20:04:08 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_H
# define OBJECT_H

#include <iostream>
#include <curses.h>

class       Object
{
    protected:
        int     _row;
        int     _col;
        char    _char;
    
    public:
        Object();
        Object(int, int, char);
        Object(Object const &);
        Object operator=(Object const &);
        ~Object();
        int     getRow();
        int     getCol();
        char    getChar();
        void    setRow(int);
        void    setCol(int);
        void    move(int, int);
};

#endif
