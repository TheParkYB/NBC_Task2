#include <iostream>
#include "Player.h"
#include "Monster.h"

using namespace std;

Monster::Monster(string name)
{
	setName(name);

	HP = 30;
	power = 30;
	defence = 10;
	speed = 10;
}

string Monster::getName()
{
	return name;
}

int Monster::getHP()
{
	return HP;
}

int Monster::getPower()
{
	return power;
}

int Monster::getDefence()
{
	return defence;
}

int Monster::getSpeed()
{
	return speed;
}

void Monster::setName(string name)
{
	this->name = name;
}

bool Monster::setHP(int HP)
{
	this->HP = HP;

	return this->HP > 0;
}

void Monster::setPower(int power)
{
	this->power = power;
}

void Monster::setDefence(int defence)
{
	this->defence = defence;
}

void Monster::setSpeed(int speed)
{
	this->speed = speed;
}

void Monster::attack(Player* player)
{
	cout << name << "의 공격!\n";

	if (!player->damaged(power))
		cout << player->getNickname() << "이(가) 쓰러지고 말았다...\n";
}

bool Monster::damaged(int damage)
{
	//받은 피해는 방어력 만큼 감소한다 (최소 1)
	damage -= defence;
	if (damage < 1)
		damage = 1;

	cout << name << "은(는) " << damage << "만큼 대미지를 받았다!\n";

	//받은 피해만큼 체력 감소 (최소 0)
	HP -= damage;
	if (HP < 0)
		HP = 0;

	cout << "HP : " << HP << endl;

	return HP > 0;
}