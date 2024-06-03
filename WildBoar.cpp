#include "WildBoar.h"

FWildBoar::FWildBoar()
{
}
FWildBoar::~FWildBoar()
{
}

void FWildBoar::Move()
{
	FCharacter::Attack();
	cout << "¸äµÅÁö";
}

void FWildBoar::Attack()
{
	FCharacter::Attack();
	cout << "¸äµÅÁö";
}