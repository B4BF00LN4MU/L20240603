#pragma once
#include <random>
#include <iostream>

class FMonster
{

public:
	FMonster();
	virtual ~FMonster();

	void Born();
	void Move();
	void Attack();

protected:
	int HP;

	void Die();
};

