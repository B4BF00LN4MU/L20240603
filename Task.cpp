#include <iostream>
#include <random>
#include <vector>

#include "Monster.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"


using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	vector<FGoblin*> MyGoblin;
	vector<FSlime*> MySlime;
	vector<FWildBoar*> MyWildBoar;
	FPlayer* MyPlayer = new FPlayer();

	while (true)
	{
		int Born = rand()%3+1;
		for (int i = 0; i < Born; ++i)
		{
			MyGoblin.push_back(new FGoblin());
		}
		for (int i = 0; i < Born; ++i)
		{
			MySlime.push_back(new FSlime());
		}
		for (int i = 0; i < Born; ++i)
		{
			MyWildBoar.push_back(new FWildBoar());
		}

		MyGoblin[i]->Attack();

		MyPlayer->Attack();

		if(MyPlayer.HP<=0;)

		for (int i = 0; i < MyGoblin.size(); ++i)
		{
			MyGoblin[i]->Move();
			MyGoblin[i]->Attack();
		}
	}


	return 0;
}