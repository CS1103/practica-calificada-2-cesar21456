//
// Created by USUARIO on 10/05/2019.
//

#include "fight.h"

fight::fight(string A,string B){
    if (A=="BL"){
        a=new BruceLee();
    }else{
        if (A=="CN"){
            a=new ChuckNorris();
        }else{
            a=new JasonStatham();
        }
    }
    if (B=="BL"){
        b=new BruceLee();
    }else{
        if (B=="CN"){
            b=new ChuckNorris();
        }else{
            b=new JasonStatham();
            }
        }
}
fight::fight(fighter *A,fighter *B){
    a=A;
    b=B;
}

int fight::calcular_puntacion(){
    int score1=a->defense2()-b->attack2();
    int score2=b->defense2()-a->attack2();
    if (score1>score2){
        winner=a;
        score=score1;
    }
    else{
        winner=b;
        score=score2;
    }
}