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

    //en este test, estoy creando una batalla con un personaje con 2 ataques y defensas y el otro de 1 solo ataque y 1 defensa
    fight abz("BL","JS");
    abz.get_fighter_a()->add_Defense(c);
    abz.get_fighter_a()->add_attack(b);
    abz.get_fighter_a()->add_Defense(w);
    abz.get_fighter_a()->add_attack(y);
    abz.get_fighter_b()->add_attack(y);
    abz.get_fighter_b()->add_Defense(w);
    abz.calcular_puntacion();
    assert(abz.get_score()==4);
    assert(abz.get_winner()=="a");
    //logicamente el valor va a ser 4 debido a que le añadi un Elude al luchador a, lo cual aumenta su score en 1


    ifstream archivo("peleas.txt");
    string line;
    getline(archivo,line);
    cout<<line<<endl;
    getline(archivo,line);
    cout<<line[0];
    cout<<line;

}