#pragma once
#include "Monster.h"
#include "HP.h"

class FWildBoar
	: public FMonster, FHP
{
public:

	FWildBoar();
	virtual ~FWildBoar();

	void Attack();

	void Move();
};

