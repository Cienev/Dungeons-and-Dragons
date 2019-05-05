#include<iostream>
#include<iomanip>
#include<string>
#include<time.h>
#include"Character.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
/* Main.cpp
 This program will simulate character data for Dungeons and Dragons game
*/
int main()
{
	Character cha;
	string n, cl, ali, r;
	string rng;
	int v1, v2, v3, v4, v5, v6, hp, str, dex, con, wis, itl, chr;
	cout << "----------Welcome to character creation for Dungeons and Dragons------" << endl;
	cout << "Enter your character's first name " << endl;
	cin >> n;
	cha.setName(n);
	cha.getName(n);
	getline(cin, n);
	cout << "Type roll to initiate your 4d6 rolls for each stat" << endl;
	getline(cin, rng);
	if (rng == "Roll" || rng == "roll")
	{
		srand(time(NULL));
		for (int i = 0; i < 4; i++) 
		{
			v1 = rand() % 6 + 1;
			cout << "Here are your d6 rolls for Stat 1: " << v1 << endl;
		}
		for (int i = 0; i < 4; i++)
		{
			v2 = rand() % 6 + 1;
			cout << "Here are your d6 rolls for Stat 2: " << v2 << endl;
		}
		for (int i = 0; i < 4; i++)
		{
			v3 = rand() % 6 + 1;
			cout << "Here are your d6 rolls for Stat 3: " << v3 << endl;
		}
		for (int i = 0; i < 4; i++)
		{
			v4 = rand() % 6 + 1;
			cout << "Here are your d6 rolls for Stat 4: " << v4 << endl;
		}
		for (int i = 0; i < 4; i++)
		{
			v5 = rand() % 6 + 1;
			cout << "Here are your d6 rolls for Stat 5: " << v5 << endl;
		}
		for (int i = 0; i < 4; i++)
		{
			v6 = rand() % 6 + 1;
			cout << "Here are your d6 rolls for Stat 6: " << v6 << endl;
		}
	}
	cout << "\nRecord your rolls above on paper so you can type them down for each stat later" << endl;
	cout << "\nTake the highest 3 and add " << endl;
	cout << "\nNow enter your specified class after calculating stat numbers" << endl;
	cin >> cl;
	cha.setClass(cl);
	cha.getClass(cl);
	getline(cin, cl);
	cout << "\nEnter your alignment" << endl;
	getline(cin, ali);
	cha.setAlignment(ali);
	cha.getAlignment(ali);
	cout << "\nEnter your race" << endl;
	getline(cin, r);
	cha.setRace(r);
	cha.getRace(r);
	cout << "\nEnter your amount of HP" << endl;
	cin >> hp;
	cha.setHitPoints(hp);
	cha.getHitPoints(hp);
	cout << "\nEnter your Strength value" << endl;
	cin >> str;
	cha.setStrength(str);
	cha.getStrength(&str);
	cout << "\nEnter your Dexterity value" << endl;
	cin >> dex;
	cha.setDexterity(dex);
	cha.getDexterity(&dex);
	cout << "\nEnter your Constitution value" << endl;
	cin >> con;
	cha.setConstitution(con);
	cha.getConstitution(&con);
	cout << "\nEnter your Intelligence value" << endl;
	cin >> itl;
	cha.setIntelligence(itl);
	cha.getIntelligence(&itl);
	cout << "\nEnter your Wisdom value" << endl;
	cin >> wis;
	cha.setWisdom(wis);
	cha.getWisdom(&wis);
	cout << "\nEnter your Charisma value" << endl;
	cin >> chr;
	cha.setCharisma(chr);
	cha.getCharisma(&chr);
	cout << "\n----------Character Stats and Information----------------\n" << endl;
	cha.printAll();
	system("PAUSE");
	return 0;
}
