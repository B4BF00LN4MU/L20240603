#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
}

FPlayer::~FPlayer()
{
}

void FPlayer::Move()
{
	FCharacter::Move();
	cout << "플레이어";
}

void FPlayer::Attack()
{
	FCharacter::Attack();
	cout << "플레이어";
}

void FPlayer::GetHP()
{
}

void FPlayer::SetHP()
{
}

void FPlayer::GetDie()
{
}

void FPlayer::SetDie()
{
}

void FPlayer::Pickup()
{
}

void FPlayer::Die()
{
}
