//
// Created by USUARIO on 10/05/2019.
//

#include "fighter.h"
int fighter::attack2(){
    int sumatoria=0;
    for (int i=0;i<a.size();i++){
        sumatoria+=a[i]->attack();
    }
    return sumatoria;
}
int fighter::defense2(){
    int sumatoria=0;
    for (int i=0;i<b.size();i++){
        sumatoria+=b[i]->defense();
    }
    return sumatoria;
}