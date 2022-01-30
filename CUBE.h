//
// Created by SALIM on 28/01/2022.
//

#ifndef HELLOGLFW_CUBE_H
#define HELLOGLFW_CUBE_H
#include "facetriple.h"
#include "face.h"
#include "facedouble.h"
#include <glfw/glfw3.h>
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
    facegenrique* disposition[3][3][3];
    CUBE();
    void render(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID);
    void rotate1(mat4 *p,mat4 *v,mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate2(mat4 *p,mat4 *v,mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate3(mat4 *p,mat4 *v,mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate4(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate5(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate6(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate7(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate8(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
    void rotate9(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID,GLFWwindow *window,string *action);
};


#endif //HELLOGLFW_CUBE_H
