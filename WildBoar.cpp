#include "WildBoar.h"
#include <iostream>

using namespace std;

FWildBoar::FWildBoar()
{
}
FWildBoar::~FWildBoar()
{
}

void FWildBoar::Move()
{
	cout << "�����";
	FCharacter::Move();
}

void FWildBoar::Attack()
{
	cout << "�����";
	FCharacter::Attack();
}