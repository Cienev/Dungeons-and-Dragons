#include<iostream>
#include<iomanip>
#pragma once
#ifndef CHAR_H
#define CHAR_H
using namespace std;

/* This program will simulate the Dungeons and Dragons game */
class Character 
{
private:
	string m_sName; 
	string m_iClass;
	string m_iAlignment;
	string m_iRace;
	int m_iHitPoints;
	int m_iCharTraits[5]; // holds the values for each trait of str, dex, con, itl, wis, chr
public:
	Character(string name, string cl, string al, string r, int hp, int str, int dex, int con, int itl, int wis, int chr);
	Character();// default constructor
	~Character(); // Destructor
	string getName(string& name);
	void setName(string name);
	string getClass(string& cl);
	void setClass(string cl);
	string getAlignment(string& al);
	void setAlignment(string al);
	string getRace(string& r);
	void setRace(string r);
	int getHitPoints(int& hp);
	void setHitPoints(int hp);
	int getStrength(int *str);
	void setStrength(int str);
	int getDexterity(int *dex);
	void setDexterity(int dex);
	int getConstitution(int *con);
	void setConstitution(int con);
	int getIntelligence(int *itl);
	void setIntelligence(int itl);
	int getWisdom(int *wis);
	void setWisdom(int wis);
	int getCharisma(int *chr);
	void setCharisma(int chr);
	void printAll();
};
#endif
