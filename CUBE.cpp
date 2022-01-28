//
// Created by SALIM on 28/01/2022.
//

#include "CUBE.h"
CUBE::CUBE() {
    this->haut=face(1);
    this->droite=face(2);
    this->bas=face(5);
    this->gauche=face(4);
    this->arriere=face(3);
    this->avant=face(0);
    this->Bordure[0]=facedouble(0);
    this->Bordure[1]=facedouble(1);
    this->Bordure[2]=facedouble(2);
    this->Bordure[3]=facedouble(3);
    this->Bordure[4]=facedouble(4);
    this->Bordure[5]=facedouble(6);
    this->Bordure[6]=facedouble(11);
    this->Bordure[7]=facedouble(8);
    this->Bordure[8]=facedouble(7);
    this->Bordure[9]=facedouble(5);
    this->Bordure[10]=facedouble(10);
    this->Bordure[11]=facedouble(9);
    this->coinsarrieredroitbas= facetriple(4)   ;
    this->coinsarrieredroithaut= facetriple(3)   ;
    this->coinsarrieregauchebas= facetriple(2)   ;
    this->coinsarrieregauchehaut= facetriple(1)   ;
    this->coinsavantdroitbas= facetriple(7)   ;
    this->coinsavantdroithaut= facetriple(6)   ;
    this->coinsavantgauchebas= facetriple(5)   ;
    this->coinsavantgauchehaut= facetriple(0)   ;


}
void CUBE::render() {
    glBindVertexArray(this->coinsarrieregauchehaut.VAO);

    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieregauchehaut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsarrieredroithaut.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieredroithaut.attribut) / sizeof(STRVertex));

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsarrieregauchebas.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieregauchebas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsarrieredroitbas.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieredroitbas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsavantgauchehaut.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantgauchehaut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsavantdroithaut.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantdroithaut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsavantdroitbas.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantdroitbas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsavantgauchebas.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantgauchebas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->haut.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->haut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->bas.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->bas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->gauche.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->gauche.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->droite.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->droite.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->arriere.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->arriere.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->avant.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->avant.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    for (int i=0;i<12;i++){
        glBindVertexArray(this->Bordure[i].VAO);
        glDrawArrays(GL_TRIANGLES, 0, sizeof(this->Bordure[i].attribut) / sizeof(STRVertex));
        glBindVertexArray(0);
    }
}
void CUBE::rotate1(mat4 *p, mat4 *v, mat4 *m,mat4 *mvp,GLuint *MatrixID) {

    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantdroithaut.attribut) / sizeof(STRVertex));
    glBindVertexArray(this->coinsavantdroitbas.VAO);

        *m= rotate(*m,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        *mvp=*p * *v * *m;

}
