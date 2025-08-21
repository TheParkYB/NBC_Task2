#pragma once
#include "Player.h"

class Magician : public Player
{
public:
	Magician(string nick_name);

	void attack() override;
	void attack(Monster* monster) override;
};