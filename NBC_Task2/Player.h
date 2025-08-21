#pragma once
#include <string>
using namespace std;

class Player
{
public:
    Player(string nick_name);

    virtual void attack() = 0;
    virtual void attack(class Monster* monster) = 0;

    //플레이어의 상태 출력
    void printPlayerStatus();

#pragma region getter 함수
    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();
#pragma endregion
    
#pragma region setter 함수
    void setNickname(string nickname);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);
#pragma endregion

    //플레이어가 피해를 받는 함수. 남은 체력이 0이되면 false를 반환
    bool damaged(int damage);

protected:
    string job_name;//직업 이름
    string nickname;//닉네임
    int level;//레벨
    int HP;//체력
    int MP;//마력
    int power;//공격력
    int defence;//방어력
    int accuracy;//정확도
    int speed;//속도
};