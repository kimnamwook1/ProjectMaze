#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() //2개 오버로드 되어있다 == 생성자가 2개 만들어져 있다.
	// : HP(0) , MP(0), GOLD(0) 메모리르 만들고 초기화 하느냐. 만들면서 넣을 거냐 이 식은 만들면서 바로 초기화 ==초기화 리스트, {}밖에 
	// 나중에 int 나 float 말고 다른 것이 들어가면 유의미 해진다.
{
	HP = 100;
	MP = 100;
	Gold = 0;
	/*cout << "Player는 생성자" << endl;*/

}
Player::Player(int NewHP, int NewMP, int NewGold) // 그냥 이름 붙인거 new가 여기선 동적할당이 아님// 파란색은 이미 컴파일러에 잡혀있다는 얘기
{
	HP = NewHP;
	MP = NewMP;
	Gold = NewGold;
	cout << "Player는 생성자" << endl;

}

Player::~Player()
{
	cout << "Player는 소멸자" << endl;
}

void Player::Move()
{
	cout << "Player 이동" << endl;
}

void Player::Attack()
{
}

void Player::Pickup()
{
}
