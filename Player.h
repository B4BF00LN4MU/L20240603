#pragma once
class FPlayer
{
public:
	FPlayer();
	virtual ~FPlayer();

	virtual void Move() override;
	void Attack();
	void Pickup();
	void Attack();

	void GetHP();
	void SetHP();
	void GetDie();
	void SetDie();

private:
	int HP;

	void Die();
};

