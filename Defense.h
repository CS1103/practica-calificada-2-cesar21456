//
// Created by USUARIO on 10/05/2019.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H


class Defense{
protected:
    int level;
public:
    int defense(){
        return level;
    }
    Defense(int level1):level(level1){};

};

class Elude:public Defense{
public:
    Elude():Defense(1){};
};
class Shield:public Defense{
public:
    Shield():Defense(4){};
};
class Armor:public Defense{
public:
    Armor():Defense(8){};
};

#endif //PC2_DEFENSE_H
