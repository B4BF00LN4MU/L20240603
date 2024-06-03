#pragma once
#include "Monster.h"
#include "HP.h"
#include "Character.h"

class FSlime : public FCharacter
{
public:
	FSlime();
	virtual ~FSlime();

	void Attack();


	void Move();
};

