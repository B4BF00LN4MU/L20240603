#pragma once


class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();

	virtual void Move();
	void Attack();


	inline int GetHP() { return HP; }//inlint�� ����? �Լ� ���°� �ƴ϶� main�� �׳� ������ó�� �����ض�

	void SetHP(int NewHP);

protected:
	int HP;
};

