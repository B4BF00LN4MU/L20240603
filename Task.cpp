#include <iostream>
#include <random>
#include <vector>

#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"


using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	FPlayer* Player = new FPlayer();
	vector<FGoblin*> Goblin;
	vector<FSlime*> Slime;
	vector<FWildBoar*> WildBoar;

	int Born = rand() % 3 + 1;

	int GoblinCount = Born;
	int SlimeCount = Born;
	int WildBoarnCount = Born;

	FGoblin* Goblins = new FGoblin[GoblinCount];
	FSlime* Slimes = new FGoblin[SlimeCount];
	FWildBoar* FildBoars = new FGoblin[WildBoarnCount];

	
	while (true)
	{
		Player->Move();
		for (int i = 0; i < GoblinCount; ++i)
		{
			rand() % 2 == 0 ? Goblins[0].Move() : Goblins[0].Attack();
		}
		for (int i = 0; i < SlimeCount; ++i)
		{
			rand() % 2 == 0 ? Slimes[0].Move() : Slimes[0].Attack();
		}
		for (int i = 0; i < WildBoarnCount; ++i)
		{
			rand() % 2 == 0 ? FildBoars[0].Move() : FildBoars[0].Attack();
		}
	}


	while (true)
	{

	}

	delete Player;

	return 0;
}