//
// Created by SALIM on 11/01/2022.
//

#ifndef HELLOGLFW_FACETRIPLE_H
#define HELLOGLFW_FACETRIPLE_H
#include <glad/glad.h>
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "../glm/glm.hpp"
#include "../glm/gtx/transform.hpp"

#include <algorithm>
using namespace glm;
struct STRVertex
{
    vec3 position;
    vec3 couleur;
};
class Facetriple {
public:
    STRVertex *vertices;
    Facetriple();
    Facetriple(int nb);
};


#endif //HELLOGLFW_FACETRIPLE_H
