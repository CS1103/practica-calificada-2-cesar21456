//
// Created by USUARIO on 10/05/2019.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H


class Attack{
protected:
    int power;
public:
    int attack(){
        return power;
    }
    Attack(int power1):power(power1){};
};


class punch:public Attack{
public:
    punch():Attack(1){};
};
class saber:public Attack{
public:
    saber():Attack(5){};
};
class Firearm:public Attack{
public:
    Firearm():Attack(10){};
};


#endif //PC2_ATTACK_H
