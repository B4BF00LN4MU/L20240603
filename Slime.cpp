#include "Slime.h"
#include <iostream>

using namespace std;

FSlime::FSlime()
{
}

FSlime::~FSlime()
{
}

void FSlime::Move()
{
	cout << "������";
	FCharacter::Move();
}

void FSlime::Attack()
{
	cout << "������";
	FCharacter::Attack();
}


