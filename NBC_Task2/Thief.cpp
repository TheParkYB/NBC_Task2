#include <iostream>
#include "Thief.h"
#include "Monster.h"

using namespace std;

Thief::Thief(string nick_name) : Player(nick_name)
{
	job_name = "도적";

	level = 1;
	HP = 60;
	MP = 50;
	power = 20;
	defence = 15;
	accuracy = 75;
	speed = 80;
}

void Thief::attack()
{
	cout << "수리검 날리기!\n";
}

void Thief::attack(Monster* monster)
{
	cout << nickname << "은(는)" << monster->getName() << "에게 수리검을 날렸다!\n";

	if (!monster->damaged(power))
		cout << monster->getName() << "이(가) 고통에 몸부림치다 쓰러졌다\n";
}
