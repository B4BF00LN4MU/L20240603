#include "Boar.h"
#include <iostream>

using namespace std;

FBoar::FBoar()
{
}

FBoar::~FBoar()
{
}

void FBoar::Move()
{
	cout << "�����";

	FCharacter::Move();
}

void FBoar::Attack()
{
	cout << "�����";

	FCharacter::Attack();
}
