#include "Goblin.h"
#include "iostream"

FGoblin::FGoblin()
{
}

FGoblin::~FGoblin()
{
}

void FGoblin::Move()
{
	FCharacter::Attack();
	cout << "���";
}

void FGoblin::Attack()
{
	FCharacter::Attack();
	cout << "���";
}
