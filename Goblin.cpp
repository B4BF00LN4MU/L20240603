#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
}

FGoblin::~FGoblin()
{
}

void FGoblin::Move()
{
	cout << "���";
	FCharacter::Move();
}

void FGoblin::Attack()
{
	cout << "���";
	FCharacter::Attack();
}
