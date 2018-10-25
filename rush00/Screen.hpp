/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 10:13:08 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/09 19:12:05 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
#define SCREEN_H

#include <ncurses.h>
#include <iostream>
#include "Player.hpp"
extern clock_t G_TIME;
class Screen {

public:
	Screen();

	~Screen();

	Screen(Screen const &obj);

	Screen &operator=(Screen const &obj);

	void sleep(unsigned long int n);

	void printScore(int score, int life);

	void screenUpdate(Player *p, Ship s[], GameEntity stars[], GameEntity playerBullets[], GameEntity explode[]);

	void drawBorders();

	bool gameOver();

	int get_maxX() const;

	void set_maxX(int _maxX);

	int get_maxY() const;

	void set_maxY(int _maxY);

	bool printMenu();

	void loadScreen();

private:
	int _maxX;
	int _maxY;
	clock_t _time;
};

#endif
