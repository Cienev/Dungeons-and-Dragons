#include<iostream>
#include<string>
#include"Character.h"
using namespace std;
/*
This program will simulate the Dungeons and Dragons game

Functions
*/

Character::Character (string name, string cl, string al, string r, int hp, int str, int dex, int con, int itl, int wis, int chr)
	{
		m_sName = name;
		m_iClass = cl;
		m_iAlignment = al;
		m_iRace = r;
		m_iHitPoints = hp;
		m_iCharTraits[0] = str;
		m_iCharTraits[1] = dex; 
		m_iCharTraits[2] = con;
		m_iCharTraits[3] = itl;
		m_iCharTraits[4] = wis;
		m_iCharTraits[5] = chr;


	}
Character::Character()
{
	//default constructor
}
string Character::getName(string& name)
{
	return name;
}
void Character::setName(string name)
{
	m_sName = name;
}
string Character::getClass(string& cl)
{
	return cl;
}
void Character::setClass(string cl)
{
	m_iClass = cl;
}
string Character::getAlignment(string& al)
{
	return al;
}
void Character::setAlignment(string al)
{
	m_iAlignment = al;
}
string Character::getRace(string& r)
{
	return r;
}
void Character::setRace(string r)
{
	m_iRace = r;
}
int Character::getHitPoints(int& hp)
{
	return hp;
}
void Character::setHitPoints(int hp)
{
	m_iHitPoints = hp;
}
int Character::getStrength(int *str)
{
	return m_iCharTraits[0];
}
void Character::setStrength(int str)
{
	m_iCharTraits[0] = str;
}
int Character::getDexterity(int *dex)
{
	return m_iCharTraits[1];
}
void Character::setDexterity(int dex)
{
	m_iCharTraits[1] = dex;
}
int Character::getConstitution(int *con)
{
	return m_iCharTraits[2];
}
void Character::setConstitution(int con)
{
	m_iCharTraits[2] = con;
}
int Character::getIntelligence(int *itl)
{
	return m_iCharTraits[3];
}
void Character::setIntelligence(int itl)
{
	m_iCharTraits[3] = itl;
}
int Character::getWisdom(int *wis)
{
	return m_iCharTraits[4];
}
void Character::setWisdom(int wis)
{
	m_iCharTraits[4] = wis;
}
int Character::getCharisma(int *chr)
{
	return m_iCharTraits[5];
}
void Character::setCharisma(int chr)
{
	m_iCharTraits[5] = chr;
}
void Character::printAll() // prints all 
{
	cout << "Character : " << m_sName << endl;
	cout << "Class: " << m_iClass << endl;
	cout << "Alignment: " << m_iAlignment << endl;
	cout << "Race: " << m_iRace << endl;
	cout << "HP: " << m_iHitPoints << endl;
	cout << "Str: " << m_iCharTraits[0] << endl;
	cout << "Dex: " << m_iCharTraits[1] << endl;
	cout << "Con: " << m_iCharTraits[2] << endl;
	cout << "Itl: " << m_iCharTraits[3] << endl;
	cout << "Wis: " << m_iCharTraits[4] << endl;
	cout << "Chr: " << m_iCharTraits[5] << endl;
}
Character::~Character() //calling out destructor
{
	cout << "Information has been released" << endl;
}

