//
// Created by SALIM on 28/01/2022.
//

#include "facetriple.h"
facetriple::facetriple() {}
facetriple::facetriple(int nb) {
    this->model=mat4(1.0);
    switch (nb) {
        case 0:
        {
            STRVertex attribut[] = {
                    vec3(-1.0f, 1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-0.34f, 1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-1.0f, 0.34f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-0.34f, 1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-1.0f, 0.34f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-0.34f, 0.34f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    /**/
                    vec3(-1.0f, 1.00f, 1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-1.0f, 1.00f, 0.34f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-0.340f, 1.00, 0.34f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-1.0f, 1.00f, 1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-0.340f, 1.00, 0.34f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-0.340f, 1.00, 1.0f), vec3(0.0f, 0.0f, 1.0f),
                    /**/
                    vec3(-1.0f, 1.00f, 1.0f) ,vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 1.00f, 0.34f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 0.34, 1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 1.00f, 0.34f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 0.34, 1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.01, 0.34, 0.34f), vec3(0.98f, 1.0f, 0.0f),


            };
            for (int i = 0; i < 18; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }
        case 1:
        {
            STRVertex attribut[] = {
                    vec3(-1.0f, 1.00f, -0.33f) ,vec3(0.0f, 0.0f, 1.0f),
                    vec3(-1.0f, 1.00f, -1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-0.340f, 1.00, -1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-1.0f, 1.00f, -0.33f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-0.340f, 1.00, -1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(-0.340f, 1.00, -0.33f), vec3(0.0f, 0.0f, 1.0f),
                    /**/
                    vec3(-1.0f, 1.00f, -0.33f) ,vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 1.00f, -1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 0.34, -0.33f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 1.00f, -1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, 0.34, -0.33f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.01, 0.34, -1.00f), vec3(0.98f, 1.0f, 0.0f),
                    /**/
                    vec3(-1.0f, 1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-0.34f, 1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-1.0f, 0.34f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-0.34f, 1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-1.0f, 0.34f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-0.34f, 0.34f, -1.0f), vec3(0.0f, 1.0f, 0.0f),

            };
            for (int i = 0; i < 18; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }
        case 2:
        {
            STRVertex attribut[] = {
                    vec3(-1.0f, -0.33f, -0.33f) ,vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -0.33f, -1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -1.00f, -0.33f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -0.33f, -1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -1.00f, -0.33f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.01, -1.00f, -1.00f), vec3(0.98f, 1.0f, 0.0f),
                    /**/
                    vec3(-1.0f, -1.00f, -0.33f) ,vec3(1.0f, 0.5f, 0.15f),
                    vec3(-1.0f, -1.00f, -1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-0.340f, -1.00, -1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-1.0f, -1.00f, -0.33f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-0.340f, -1.00, -1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-0.340f, -1.00, -0.33f), vec3(1.0f, 0.5f, 0.15f),
                    /**/
                    vec3(-1.0f, -0.33f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-0.34f, -0.33f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-1.0f, 0.-1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-0.34f, -0.33f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-1.0f, -1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(-0.34f, -1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),


            };
            for (int i = 0; i < 18; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }
        case 3:
        {
            STRVertex attribut[] = {
                    vec3(0.33f, 1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(1.0f, 1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(0.330f, 0.34f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(0.33f, 0.34f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(1.0f, 1.0f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(1.0f, 0.34f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    /**/
                    vec3(0.340f, 1.00f, -0.33f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(0.340f, 1.00f, -1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(1.0f, 1.00, -1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(0.34f, 1.00f, -0.330f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(1.0f, 1.00, -1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(1.0f, 1.00, -0.330f), vec3(0.0f, 0.0f, 1.0f),
                    /**/
                    vec3(1.0f, 1.00f, -0.33f) ,vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 1.00f, -1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 0.34, -0.33f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 1.00f, -1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 0.34, -0.33f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.01, 0.34, -1.00f), vec3(1.0f, 1.0f, 1.0f),

            };
            for (int i = 0; i < 18; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }
        case 4:
        {
            STRVertex attribut[] = {
                    vec3(0.33f, -0.330f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(1.0f, -0.330f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(0.330f, -1.00f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(0.33f, -1.00f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(1.0f, -0.330f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    vec3(1.0f, -1.00f, -1.0f), vec3(0.0f, 1.0f, 0.0f),
                    /**/
                    vec3(0.340f, -1.00f, -0.33f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(0.340f, -1.00f, -1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(1.0f, -1.00, -1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(0.34f, -1.00f, -0.330f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(1.0f, -1.00, -1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(1.0f, -1.00, -0.330f), vec3(1.0f, 0.5f, 0.15f),
                    /**/
                    vec3(1.0f, -0.33f, -0.33f) ,vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -0.33f, -1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -1.00f, -0.33f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -0.33f, -1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -1.00f, -0.33f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.01, -1.00f, -1.00f), vec3(1.0f, 1.0f, 1.0f),

            };
            for (int i = 0; i < 18; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }
        case 5:
        {
            STRVertex attribut[] = {
                    vec3(-1.0f, -0.33f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-0.34f, -0.33f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-1.0f, 0.-1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-0.34f, -0.33f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-1.0f, -1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(-0.34f, -1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    /**/
                    vec3(-1.0f, -0.33f, 1.0f) ,vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -0.33f, 0.34f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -1.00f, 1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -0.33f, 0.34f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.0f, -1.00f, 1.0f), vec3(0.98f, 1.0f, 0.0f),
                    vec3(-1.01, -1.00f, 0.34f), vec3(0.98f, 1.0f, 0.0f),
                    /**/
                    vec3(-1.0f, -1.00f, 1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-1.0f, -1.00f, 0.34f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-0.340f, -1.00, 0.34f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-1.0f, -1.00f, 1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-0.340f, -1.00, 0.34f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(-0.340f, -1.00, 1.0f), vec3(1.0f, 0.5f, 0.15f),

            };
            for (int i = 0; i < 12; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }
        case 6:
        {
            STRVertex attribut[] = {
                    vec3(1.0f, 1.00f, 1.0f) ,vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 1.00f, 0.34f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 0.34, 1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 1.00f, 0.34f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, 0.34, 1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.01, 0.34, 0.34f), vec3(1.0f, 1.0f, 1.0f),
                    /**/
                    vec3(0.340f, 1.00f, 1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(0.340f, 1.00f, 0.34f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(1.0f, 1.00, 0.34f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(0.34f, 1.00f, 1.0f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(1.0f, 1.00, 0.34f), vec3(0.0f, 0.0f, 1.0f),
                    vec3(1.0f, 1.00, 1.0f), vec3(0.0f, 0.0f, 1.0f),
                    /**/
                    vec3(0.33f, 1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(1.0f, 1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(0.330f, 0.34f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(0.33f, 0.34f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(1.0f, 1.0f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(1.0f, 0.34f, 1.0f), vec3(1.0f, 0.0f, 0.0f),

            };
            for (int i = 0; i < 18; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }
        case 7:
        {
            STRVertex attribut[] = {
                    vec3(1.0f, -0.33f, 1.0f) ,vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -0.33f, 0.34f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -1.00f, 1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -0.33f, 0.34f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.0f, -1.00f, 1.0f), vec3(1.0f, 1.0f, 1.0f),
                    vec3(1.01, -1.00f, 0.34f), vec3(1.0f, 1.0f, 1.0f),
                    /**/
                    vec3(0.340f, -1.00f, 1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(0.340f, -1.00f, 0.34f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(1.0f, -1.00, 0.34f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(0.34f, -1.00f, 1.0f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(1.0f, -1.00, 0.34f), vec3(1.0f, 0.5f, 0.15f),
                    vec3(1.0f, -1.00, 1.0f), vec3(1.0f, 0.5f, 0.15f),
                    /**/
                    vec3(0.33f, -0.330f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(1.0f, -0.330f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(0.330f, -1.00f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(0.33f, -1.00f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(1.0f, -0.330f, 1.0f), vec3(1.0f, 0.0f, 0.0f),
                    vec3(1.0f, -1.00f, 1.0f), vec3(1.0f, 0.0f, 0.0f),

            };
            for (int i = 0; i < 18; i++) {
                this->attribut[i] = attribut[i];
            }
            break;
        }

    }
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);

    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(attribut), attribut, GL_STATIC_DRAW);
    //- Lier le premier buffer d'attributs (les sommets) et configurer le pointeur :
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(STRVertex) , (void*)offsetof(STRVertex,position) );
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(STRVertex) , (void*)offsetof(STRVertex,couleur) );
    //- On indique à OpenGL qu'on utilise un attribut donné :
    glEnableVertexAttribArray(0);
    //- Débinder le VAO et le VBO :
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
}