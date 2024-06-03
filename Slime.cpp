#include "Slime.h"

FSlime::FSlime()
{
}

FSlime::~FSlime()
{
}

void FSlime::Move()
{
	FCharacter::Attack();
	cout << "슬라임";
}

void FSlime::Attack()
{
	FCharacter::Attack();
	cout << "슬라임";
}


