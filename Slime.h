#pragma once
#include "Monster.h"
#include "HP.h"

class FSlime : public FMonster, FHP
{
public:
	FSlime();
	virtual ~FSlime();

	void Attack();


	void Move();
};

