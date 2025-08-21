#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(string nick_name)
{
	setNickname(nick_name);
}

void Player::printPlayerStatus()
{
	cout << "------------------------------------" << endl;
	cout << "* 현재 능력치" << endl;
	cout << "닉네임: " << nickname << endl;
	cout << "직업: " << job_name << endl;
	cout << "Lv. " << level << endl;
	cout << "HP: " << HP << endl;
	cout << "MP: " << MP << endl;
	cout << "공격력: " << power << endl;
	cout << "방어력: " << defence << endl;
	cout << "정확도: " << accuracy << endl;
	cout << "속도: " << speed << endl;
	cout << "------------------------------------" << endl;
}

string Player::getJobName()
{
	return job_name;
}

string Player::getNickname()
{
	return nickname;
}

int Player::getLevel()
{
	return level;
}

int Player::getHP()
{
	return HP;
}

int Player::getMP()
{
	return MP;
}

int Player::getAccuracy()
{
	return accuracy;
}

void Player::setNickname(string nickname)
{
	this->nickname = nickname;
}

bool Player::setMP(int MP)
{
	this->MP = MP;

	return this->MP > 0;
}

void Player::setAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}

bool Player::damaged(int damage)
{
	//받은 피해는 방어력 만큼 감소한다 (최소 1)
	damage -= defence;
	if (damage < 1)
		damage = 1;

	cout << nickname << "은(는) " << damage << "만큼 대미지를 받았다!\n";

	//받은 피해만큼 체력 감소 (최소 0)
	HP -= damage;
	if (HP < 0)
		HP = 0;

	cout << "HP : " << HP << endl;

	return HP > 0;
}
