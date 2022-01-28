//
// Created by SALIM on 11/01/2022.
//

#include "Facetriple.h"
Facetriple::Facetriple() {

    this->vertices=(STRVertex *)malloc(sizeof (STRVertex)*18) ;


}
Facetriple::Facetriple(int nb) {
    this->vertices=(STRVertex *)malloc(sizeof (STRVertex)*6) ;
    if (nb==1){

        this->vertices[0].position=vec3(-1.0f, 1.0f, 1.0f);
        this->vertices[0].couleur=vec3(1.0f, 0.0f, 0.0f);
        this->vertices[1].position= vec3(-0.34f, 1.0f, 1.0f);
        this->vertices[1].couleur=vec3(1.0f, 0.0f, 0.0f);
        this->vertices[3].position=vec3(-1.0f, 0.34f, 1.0f);
        this->vertices[3].couleur=vec3(1.0f, 0.0f, 0.0f);

    }


}