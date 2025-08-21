#pragma once
#include "Player.h"

class Thief : public Player
{
public:
	Thief(string nick_name);

	void attack() override;
	void attack(Monster* monster) override;
};