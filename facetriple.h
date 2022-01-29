//
// Created by SALIM on 28/01/2022.
//

#ifndef HELLOGLFW_FACETRIPLE_H
#define HELLOGLFW_FACETRIPLE_H
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "glm/glm.hpp"
#include "glm/gtx/transform.hpp"
#include <algorithm>
using namespace std;
using namespace glm;

#include <glad/glad.h>
#include "strvertex.h"
#include "facegenrique.h"
class facetriple : public facegenrique{
    public:
    GLuint VAO;
    GLuint VBO;

    STRVertex attribut[18] ;
    facetriple();
    facetriple(int nb);
};


#endif //HELLOGLFW_FACETRIPLE_H
