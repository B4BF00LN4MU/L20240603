#pragma once
#include<iostream>

class FCharacter
{
public:
	FCharacter();
	virtual	~FCharacter();


	int HP = 100;

	virtual void Move();
	void Attack();
	inline	int GetHP() { return HP; }; //inlint�� ����? �Լ� ���°� �ƴ϶� main�� �׳� ������ó�� �����ض�
	void SetHP(int NewHP);

protected:
	int HP;
};

