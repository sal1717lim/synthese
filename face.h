//
// Created by SALIM on 28/01/2022.
//

#ifndef HELLOGLFW_FACE_H
#define HELLOGLFW_FACE_H
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
class face {
public:

    GLuint VAO;
    GLuint VBO;
    mat4 model;
    STRVertex attribut[6] ;
    face();
    face(int nb);

    void load();

};


#endif //HELLOGLFW_FACE_H
