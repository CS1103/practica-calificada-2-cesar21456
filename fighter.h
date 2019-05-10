//
// Created by USUARIO on 10/05/2019.
//

#ifndef PROJECT_FIGHTER_H
#define PROJECT_FIGHTER_H
#include <vector>
#include <iostream>
#include "attack.h"
#include "Defense.h"

using namespace std;

class fighter {
protected:
vector<Attack*> a;
vector<Defense*> b;

public:
    int attack2();
    void add_attack(Attack *X){
        a.push_back(X);
    }
    int defense2();
    void add_Defense(Defense *X){
        b.push_back(X);
    }
};

class BruceLee:public fighter{};
class ChuckNorris:public fighter{};
class JasonStatham:public fighter{};




#endif //PROJECT_FIGHTER_H
