#pragma once
#include <string>

using namespace std;

class Monster
{
public:
    // Monster 생성자
    // - 몬스터의 이름을 매개변수로 입력 받습니다.
    // - 모든 몬스터는 HP 10, 공격력 30, 방어력 10, 스피드 10의 능력치를 가집니다.
    Monster(string name);

#pragma region getter 함수
    string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();
#pragma endregion

#pragma region setter 함수
    void setName(string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);
#pragma endregion

    // 몬스터의 공격 함수
    void attack(class Player* player);

    //몬스터가 피해를 받는 함수. 남은 체력이 0이되면 false를 반환
    bool damaged(int damage);

protected:
    string name; // 몬스터의 이름
    int HP; // 몬스터의 HP
    int power; // 몬스터의 공격력
    int defence; // 몬스터의 방어력
    int speed; // 몬스터의 스피드
};