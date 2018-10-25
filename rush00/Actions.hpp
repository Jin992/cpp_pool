/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Action.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 11:02:05 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/09 20:03:38 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTION_H
#define ACTION_H

#include "Player.hpp"

class Action {

public:
	Action();

	Action(Action const &obj);

	Action &operator=(Action const &obj);

	~Action();

	void setAction(int ch);

	int get_action() const;

	void set_action(int _action);

	bool applyAction(Player *p, Ship s[], GameEntity stars[], GameEntity playerBullets[], GameEntity explode[]);

	void checkCollision(Player *p1, Ship s1[], GameEntity playerBullets[]);

private:
	int _action;
};

#endif
