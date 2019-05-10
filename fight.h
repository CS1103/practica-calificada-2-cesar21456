//
// Created by USUARIO on 10/05/2019.
//

#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H

#include "fighter.h"
#include <string>
using namespace std;

class fight {
    fighter *a;
    fighter *b;
    fighter *winner;
    int score;
public:
    fight(string A,string B);
    fight(fighter *A,fighter *B);
    int calcular_puntacion();
    fighter* get_fighter_a(){
        return a;
    }
    fighter* get_fighter_b(){
        return b;
    }
    string get_winner(){
        if (winner==a){
            return "a";
        }else{
            return "b";
        }
    }
    int get_score(){
        return score;

    }
};


#endif //PC2_FIGHT_H
