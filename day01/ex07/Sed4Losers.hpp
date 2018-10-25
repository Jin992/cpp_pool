/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed4Losers.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:07:25 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 21:14:30 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DAY01_SED4LOSERS_HPP
#define DAY01_SED4LOSERS_HPP
#include <iostream>
#include <fstream>
#include <sstream>

class Sed4Losers {
public:
    bool isAllGood(std::string s1, std::string s2);
    std::string readFileToString(std::string filename);
    std::string replaceString(std::string &str, const std::string &repl, const std::string &with);
    void writeToFile(std::string filename, std::string content);
    void dispose();
};
#endif
