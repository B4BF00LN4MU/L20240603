#include "Monster.h"

FMonster::FMonster()
{
}

FMonster::~FMonster()
{
}

void FMonster::Born()
{
	srand((unsigned)time(NULL));
	int Born = rand() % 3 + 1;
}

void FMonster::Move()
{
}

void FMonster::Attack()
{
}

void FMonster::Die()
{
}
