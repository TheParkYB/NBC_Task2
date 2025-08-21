#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include "Monster.h"
using namespace std;

// 메인 함수
int main() 
{
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    //플레이어 이름
    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    //직업 선택
    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) 
    {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice)
    {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    player->printPlayerStatus();

    //몬스터 생성
    Monster* monster = new Monster("고블린");

    //전투 진행
    while (player->getHP() > 0)
    {
        cout << endl;

        player->attack(monster);
        if (monster->getHP() <= 0)
            break;

        cout << endl;

        monster->attack(player);
    }

    cout << "\n========================================\n";

    if (player->getHP() > 0)
        cout << "이겼닭! 오늘 저녁은 치킨이닭!\n";
    else
        cout << "Game Over\n";

    delete player;
    delete monster;

    return 0;
}