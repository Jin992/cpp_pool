/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:22:11 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/11 12:54:40 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <iomanip>

class Convert {
public:
    Convert(const char *);

    ~Convert();

    Convert(Convert const &src);

    Convert &operator=(Convert const &rhs);

    void convert_int();

    void convert_float();

    void convert_double();

    void convert_char();

    std::string getIntResult();

    std::string getDoubleResult();

    std::string getFloatResult();
    std::string getStrNumber(void);

    int getINumber(void);

    void getCharResult();
    char getChar();

    operator float();

    operator int();

    operator char();

    operator double();

private:
    int _i_number;
    float _fl_number;
    char _to_char;
    std::string _str_number;
    std::string int_result;
    std::string char_result;
    std::string double_result;
    std::string float_result;
};

std::ostream &operator<<(std::ostream &output, Convert &convert);

#endif 
