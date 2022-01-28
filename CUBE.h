//
// Created by SALIM on 28/01/2022.
//

#ifndef HELLOGLFW_CUBE_H
#define HELLOGLFW_CUBE_H
#include "facetriple.h"
#include "face.h"
#include "facedouble.h"
class CUBE {
public:
    facetriple coinsarrieredroithaut;
    facetriple coinsarrieregauchehaut;
    facetriple coinsarrieredroitbas;
    facetriple coinsarrieregauchebas;
    facetriple coinsavantdroithaut;
    facetriple coinsavantgauchehaut;
    facetriple coinsavantdroitbas;
    facetriple coinsavantgauchebas;
    face haut;
    face bas;
    face arriere;
    face avant;
    face droite;
    face gauche;
    facedouble Bordure[12];

    CUBE();
    void render();
    void rotate1(mat4 *p,mat4 *v,mat4 *m,mat4 *mvp,GLuint *MatrixID);


};


#endif //HELLOGLFW_CUBE_H
