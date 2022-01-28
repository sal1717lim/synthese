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
void CUBE::render(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID) {
    glBindVertexArray(this->coinsarrieregauchehaut.VAO);
   mvp=*p * *v * this->coinsarrieregauchehaut.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieregauchehaut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsarrieredroithaut.VAO);
   mvp=*p * *v * this->coinsarrieredroithaut.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieredroithaut.attribut) / sizeof(STRVertex));

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsarrieregauchebas.VAO);
   mvp=*p * *v * this->coinsarrieregauchebas.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieregauchebas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsarrieredroitbas.VAO);

   mvp=*p * *v * this->coinsarrieredroitbas.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsarrieredroitbas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsavantgauchehaut.VAO);

   mvp=*p * *v * this->coinsavantgauchehaut.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantgauchehaut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsavantdroithaut.VAO);
   mvp=*p * *v * this->coinsavantdroithaut.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantdroithaut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->coinsavantdroitbas.VAO);
   mvp=*p * *v * this->coinsavantdroitbas.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantdroitbas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

   mvp=*p * *v * this->coinsavantgauchebas.model;
   glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glBindVertexArray(this->coinsavantgauchebas.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->coinsavantgauchebas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

    glBindVertexArray(this->haut.VAO);
    mvp=*p * *v * this->haut.model;
    glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->haut.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    mvp=*p * *v * this->bas.model;
    glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glBindVertexArray(this->bas.VAO);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->bas.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->gauche.VAO);
    mvp=*p * *v * this->gauche.model;
    glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->gauche.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->droite.VAO);
    mvp=*p * *v * this->droite.model;
    glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->droite.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->arriere.VAO);
    mvp=*p * *v * this->arriere.model;
    glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->arriere.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    glBindVertexArray(this->avant.VAO);
    mvp=*p * *v * this->avant.model;
    glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
    glDrawArrays(GL_TRIANGLES, 0, sizeof(this->avant.attribut) / sizeof(STRVertex));
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    for (int i=0;i<12;i++){
        glBindVertexArray(this->Bordure[i].VAO);
        mvp=*p * *v * this->Bordure[i].model;
        glUniformMatrix4fv(*MatrixID, 1, GL_FALSE, &mvp[0][0]);
        glDrawArrays(GL_TRIANGLES, 0, sizeof(this->Bordure[i].attribut) / sizeof(STRVertex));
        glBindVertexArray(0);
    }

}
void CUBE::rotate1(mat4 *p, mat4 *v, mat4 *m,mat4 mvp,GLuint *MatrixID) {


        this->coinsavantdroithaut.model= rotate(this->coinsavantdroithaut.model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->coinsavantgauchehaut.model= rotate(this->coinsavantgauchehaut.model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->coinsarrieregauchehaut.model= rotate(this->coinsarrieregauchehaut.model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->coinsarrieredroithaut.model= rotate(this->coinsarrieredroithaut.model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->haut.model= rotate(this->haut.model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->Bordure[0].model=rotate(this->Bordure[0].model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->Bordure[4].model=rotate(this->Bordure[4].model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->Bordure[7].model=rotate(this->Bordure[7].model,radians(0.1f),vec3(0.0f,1.0f,0.0f));
        this->Bordure[8].model=rotate(this->Bordure[8].model,radians(0.1f),vec3(0.0f,1.0f,0.0f));

}
