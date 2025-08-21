#include <iostream>
#include "Warrior.h"
#include "Monster.h"

using namespace std;

Warrior::Warrior(string nick_name) : Player (nick_name)
{
	job_name = "전사";

	level = 1;
	HP = 80;
	MP = 30;
	power = 30;
	defence = 20;
	accuracy = 70;
	speed = 10;
}

void Warrior::attack()
{
	cout << "검을 휘둘렀다!\n";
}

void Warrior::attack(Monster* monster)
{
	cout << nickname << "은(는)" << monster->getName() << "에게 검을 휘둘렀다!\n";

	if (!monster->damaged(power))
		cout << monster->getName() << "을(를) 해치웠다\n";
}
