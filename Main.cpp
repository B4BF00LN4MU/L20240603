#include <iostream>
#include <random>
#include <vector>

#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"
#include "Character.h"

using namespace std;
namespace 
{

	class Parent
	{
	public:
		Parent()
		{

		}
		virtual ~Parent();
	};
	class Child:
}

class child
{

};

Parent::~Parent()
{

}

int main()
{
	srand((unsigned)time(NULL));
	
	Parent* Person = new Child[4];

	vector<FCharacter*> Characters;
	Characters.push_back(new FPlayer());
	int StageMonsterCount[10] = {};
	for (int i = 0; i < 10; ++i)
	{
		StageMonsterCount[i] = rand() % 10 + 1;
	}
	for (int i = 0; i <= StageMonsterCount[9]; ++i)
	{
		int Type = rand() % 3;
		switch (Type)
		{
		case 0:
			Characters.push_back(new FGoblin());
			break;
		case 1:
			Characters.push_back(new FSlime());
			break;
		case 2:
			Characters.push_back(new FWildBoar());
			break;
		}
	}

	while(true)
	{
		for (int i = 0; i < Characters.size(); ++i)
		{
			Characters[i]->Move();
			FPlayer* Player = dynamic_cast<FPlayer*>(Characters[i]);
				if (Player != nullptr)
				{
					Player->PickUp();
				}
				else
				{
					Characters[i]->Move();
				}

		}


	//for(int i=0;i<10;++i)
	//{
	//	int key = rand() % 2;
	//	if (key == 1)
	//		for (auto Character : Characters)
	//		{
	//			Character->Move();
	//		}
	//	cout<<endl;
	//	if (key == 0)
	//		for (auto Character : Characters)
	//		{
	//			Character->Attack();
	//		}
	//	cout << endl;
	}



	for (auto Character : Characters)
	{
		delete Character;
	}

	//while (true)
	//{
	//	for (auto Character : Characters)
	//	{


	//		while (true)
	//		{
	//			Player->Move();
	//			for (int i = 0; i < Goblins.size(); ++i)
	//			{
	//				rand() % 2 == 0 ? Goblins[0]->Move() : Goblins[0]->Attack();
	//			}
	//			for (int i = 0; i < Slimes.size(); ++i)
	//			{
	//				rand() % 2 == 0 ? Slimes[0]->Move() : Slimes[0]->Attack();
	//			}
	//			for (int i = 0; i < WildBoars.size(); ++i)
	//			{
	//				rand() % 2 == 0 ? WildBoars[0]->Move() : WildBoars[0]->Attack();
	//			}
	//		}

	//		delete Player;
	//		for (FGoblin* Goblin : Goblins)
	//		{
	//			delete Goblin;
	//		}
	//		Goblins.clear();
	//		for (auto Slime : Slimes)
	//		{
	//			delete Slime;
	//		}
	//		Slimes.clear();
	//		for (int i = 0; i < WildBoars.size(); ++i)
	//		{
	//			delete WildBoars[i];
	//		}
	//		WildBoars.clear();

			return 0;
		}