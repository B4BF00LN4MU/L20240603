#pragma once
class FPlayer
{
public:
	FPlayer();
	virtual ~FPlayer();

	void Move();
	void Attack();
	void Pickup();
	void Attack();
	void GetHP();
	void SetHP();

private:
	int HP;

	void Die();
};

