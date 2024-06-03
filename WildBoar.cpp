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
	cout << "¸äµÅÁö";
	FCharacter::Move();
}

void FWildBoar::Attack()
{
	cout << "¸äµÅÁö";
	FCharacter::Attack();
}