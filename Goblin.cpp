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
	cout << "고블린";
}

void FGoblin::Attack()
{
	FCharacter::Attack();
	cout << "고블린";
}
