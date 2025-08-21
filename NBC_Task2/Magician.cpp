#include <iostream>
#include "Magician.h"
#include "Monster.h"

using namespace std;

Magician::Magician(string nick_name) : Player(nick_name)
{
	job_name = "마법사";

	level = 1;
	HP = 50;
	MP = 80;
	power = 25;
	defence = 10;
	accuracy = 75;
	speed = 15;
}

void Magician::attack()
{
	cout << "매직 볼트 시전!\n";
}

void Magician::attack(Monster* monster)
{
	cout << nickname << "은(는)" << monster->getName() << "에게 매직 볼트를 시전했다!\n";

	if (!monster->damaged(power))
		cout << monster->getName() << "의 형체가 사라졌다\n";
}
