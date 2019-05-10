//
// Created by USUARIO on 10/05/2019.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H
#include "fight.h"
#include <fstream>

class Arena {
    vector<fight> vector_de_peleas;
public:
    //aqui deberia haber un constructor, pero como no se requiere inicializar nada, pues no lo pondre para que se genere un constructor predeterminado
void run(fighter *A,fighter *B){
    fight pelea=fight(A,B);
    vector_de_peleas.push_back(pelea);

}
vector<fight> get_fights(){
    return vector_de_peleas;
}
void load_fight(ifstream archivo){
        string linea;
        fighter *a;
        fighter *b;
        int contador=0;
        while (getline(archivo,linea)){
            contador+=1;
        }
        for (int i=0;i<contador/3;i++){
            for (int j=0;j<3;j++){


            }
        }
    }





};


#endif //PC2_ARENA_H
