#pragma once


class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();

	virtual void Move();
	void Attack();


	inline int GetHP() { return HP; }//inlint이 뭔데? 함수 형태가 아니라 main에 그냥 적은거처럼 실행해라

	void SetHP(int NewHP);

protected:
	int HP;
};

