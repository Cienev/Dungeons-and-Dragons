##This program simulates a role-playing game which the player can design their
##in-game characters

import random

class Character:
    def _init_(self, name, age, stats, alignment, profession):

        self.name = name;
        self.age = age;
        self.stats = stats;
        self.profession = profession;

    def statsGenerator(stats):
        dice = input("Type 'dice' or 'Dice' to generate your character's stats ");
        if dice == 'dice' or 'Dice':
            for stats in range(6):
                stre = random.randint(10,20);
                dex = random.randint(10,20);
                con = random.randint(10,20);
                intl = random.randint(10,20);
                wis = random.randint(10,20);
                charis = random.randint(10,20);
        print("Here are your rolls for stats respectively", "\n", "str: ", stre, "\n", "dex: ", dex, "\n", "con: ", con, "\n", "intl: ", intl, "\n", "wis: ", wis, "\n", "charis: ", charis, "\n");
        return stre, dex, con, intl, wis, charis;

    def charName(name):
        name = input("What name would you like to give your character? ");
        return name;

    def charAge(age):
        age = input("How old is your character? ");
        return age;

    def charProfession(profession):
        print("Here are a selection of classes your character can be, ");
        print("Warrior, Wizard, Paladin, Rogue, Ranger, Sorceror, or Druid ");
        profession = input();
        return profession;
        

def main():
    print("Welcome to character creation!");
    again = 'yes';
    while again != 'no':
        char = Character();
        name = char.charName();
        stats = char.statsGenerator();
        age = char.charAge();
        profession = char.charProfession();
        print("Here is your character profile ");
        print("------------------------------------------------------------------- ");
        print("Name: ", name);
        print("Age: ", age);
        print("Character Stats: ", stats);
        print("Class: ", profession);
        print("\n");
        
        again = input("Would you like to make another character? yes or no (input is case sensitive) ");
        
    print("Congratulations, you have finish making your characters. Are you ready for your first quest? ");
        
        
    
main()
        
