#pragma once
#include "Player.h"

class Archer : public Player
{
public:
	Archer(string nick_name);

	void attack() override;
	void attack(Monster* monster) override;
};