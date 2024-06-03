#pragma once
#include "Monster.h"
#include "HP.h"

class FGoblin:
	public FMonster,  FHP
{
public:

	FGoblin();
	virtual ~FGoblin();

	void Attack();

	void Move();
};

