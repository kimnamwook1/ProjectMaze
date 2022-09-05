#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor();
	~AActor(); 

	char Shape;
	Vector2D Location;
	int Hp;
	int Gold;

	void Move();
	void Attack();
	void Draw();
};

