#include "Actor.h"

AActor::AActor()
{
	Shape = ' ';
	Location.X = 0;
	Location.Y = 0;
	Hp = 100;
}

AActor::~AActor()
{
}


void AActor::Move()
{
}

void AActor::Attack()
{
}

void AActor::Draw()
{
}
