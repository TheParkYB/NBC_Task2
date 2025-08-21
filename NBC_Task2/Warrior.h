#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
	Warrior(string nick_name);

	void attack() override;
	void attack(Monster* monster) override;
};