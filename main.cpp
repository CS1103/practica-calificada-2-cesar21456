#include <iostream>
#include "Defense.h"
#include "attack.h"
#include "fighter.h"
#include "fight.h"
#include "Arena.h"
#include <cassert>
#include <fstream>
using namespace std;
int main() {
    fighter *a=new BruceLee();
    Attack *b=new Firearm();
    Defense *c=new Shield();

    fighter *z=new JasonStatham();
    Attack *y=new punch();
    Defense *w=new Elude();


    a->add_attack(b);
    a->add_Defense(c);
    z->add_attack(y);
    z->add_Defense(w);


    fight abs("BL","JS");
    abs.get_fighter_a()->add_attack(b);
    abs.get_fighter_a()->add_Defense(c);
    abs.get_fighter_b()->add_attack(y);
    abs.get_fighter_b()->add_Defense(w);
    abs.calcular_puntacion();
    //en estos tests, estoy haciendo la comprobacion de que los luchadores, ataques, defensas y la batalla en si funcionen correctamente
    assert(abs.get_winner()=="a");
    assert(abs.get_score()==3);
    ifstream archivo("peleas.txt");
    string line;
    getline(archivo,line);
    cout<<line<<endl;
    getline(archivo,line);
    cout<<line[0];
    cout<<line;

}
