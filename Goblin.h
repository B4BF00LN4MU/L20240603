#pragma once
#include "Monster.h"
#include "HP.h"
#include "Character.h"

class FGoblin:
	public FCharacter

{
public:

	FGoblin();
	virtual ~FGoblin();

	void Move();
	void Attack();
};

