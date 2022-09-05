#pragma once
#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	virtual ~Monster(); // 소멸자에는 다 virtual을 붙여줘라 그냥 묻지말고
	
	int HP;
	int Gold;

 //함수가 같으나 인자가 다르면 다른 함수로 인식 == 함수오버로딩한다. == name mangling
	//void Move(int B);랑 밑에랑 
	virtual void Move(); // virtual이면 메모리 상에 포인터로 들어와서 자식에 있는지 체크 == 자식에서 재정의 해주겠다.
	virtual void Attack();
	virtual void Drop();
};

