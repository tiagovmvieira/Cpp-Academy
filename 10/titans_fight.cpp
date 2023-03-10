#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

class Warrior{
private:
    int attkMax;
    int blockMax;

public:
    std::string name;
    int health;

    Warrior(std::string name, int health, int attkMax, int blockMax){
        this -> name = name;
        this -> health = health;
        this -> attkMax = attkMax;
        this -> blockMax = blockMax;
    };

    int Attack(){
        return std::rand() % this -> attkMax;
    }
    int Block(){
        return std::rand() % this -> blockMax;
    }

    ~Warrior(){
        std::cout << "Warrior " << this -> name << " destroyed\n";
    }

    void ToString(){
        std::cout << this -> name << " is down to " <<
                this -> health <<
                " health \n";
    };
};

class Battle{
public:
    static void StartFight(Warrior& warrior1, Warrior& warrior2){
        while(true){
            if(Battle::GetAttackResult(warrior1, warrior2).compare("Game Over") == 0){
                std::cout << "Game Over\n";
                break;
            }
            if(Battle::GetAttackResult(warrior2, warrior1).compare("Game Over") == 0){
                std::cout << "Game Over\n";
                break;
            }
        }
    }

    static std::string GetAttackResult(Warrior& warriorA, Warrior& warriorB){
        int warriorAAttkAmt = warriorA.Attack();
        int warriorBBlockAmt = warriorB.Block();
        int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
        damage2WarriorB = (damage2WarriorB <= 0) ? 0:
            damage2WarriorB;

        warriorB.health = warriorB.health - damage2WarriorB;
        printf("%s attacks %s and deals %d damage\n",
                warriorA.name.c_str(),
                warriorB.name.c_str(),
                damage2WarriorB);

        printf("%s is down to %d health\n",
                warriorB.name.c_str(),
                warriorB.health);

        if(warriorB.health <= 0){
            printf("%s had Died and %s is Victorious\n",
                    warriorB.name.c_str(),
                    warriorA.name.c_str());
            return "Game Over";
        } else {
            return "Fight Again";
        }
    }
};

int main(){
    /*
    Thor attacks Hulk and deals 12 damage
    Hulk is down to 28 health
    Hulk attacks Thor and deals 3 damage
    Thor is down to 37 health
    Thor attacks Hulk and deals 14 damage
    Hulk is down to 14 health
    Hulk attacks Thor and deals 0 damage
    Thor is down to 37 health
    Thor attacks Hulk and deals 14 damage
    Hulk is down to 0 health
    Hulk has Died and Thor is Victorious
    Game Over
    */
   
   // seed random generator
   srand(time(NULL));
   Warrior thor("Thor", 100, 30, 15);
   Warrior hulk("Hulk", 135, 25, 15);
   
   Battle::StartFight(thor, hulk);

    return 0;
}