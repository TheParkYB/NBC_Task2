#include <iostream>
#include "Archer.h"
#include "Monster.h"

using namespace std;

Archer::Archer(string nick_name) : Player(nick_name)
{
	job_name = "궁수";

	level = 1;
	HP = 60;
	MP = 50;
	power = 25;
	defence = 10;
	accuracy = 80;
	speed = 20;
}

void Archer::attack()
{
	cout << "화살을 쐈다!\n";
}

void Archer::attack(Monster* monster)
{
	cout << nickname << "은(는)" << monster->getName() << "에게 화살을 쐈다!\n";

	if (!monster->damaged(power))
		cout << monster->getName() << "이(가) 쓰러졌다\n";
}
