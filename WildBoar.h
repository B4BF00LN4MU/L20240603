#pragma once
#include "Monster.h"
#include "HP.h"
#include "Character.h"

class FWildBoar
	: public FCharacter
{
public:

	FWildBoar();
	virtual ~FWildBoar();

	void Attack();

	void Move();
};

