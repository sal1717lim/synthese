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
#include "face.h"
#include "facedouble.h"
#include <algorithm>
#include "CUBE.h"
string actions="";
using namespace std;
using namespace glm;
#include <stdlib.h>
#include <string.h>
#include <glad/glad.h>
#include "facetriple.h"
#include <ctime>
float rayon = 7.0;

mat4 Projection = perspective(radians(45.0f), 4.0f / 3.0f, 0.1f, 100.0f);
mat4 View ;
mat4 Model = mat4(1.0f);
mat4 MVP;
float cptx=0;
float cpty=0;
float cptz=0;
float Xcam = rayon * sin(cptx);
float Zcam = rayon * cos(cptz);
float Ycam =3;
GLuint VAO;
GLuint VBO;


GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path){

    // Create the shaders
    GLuint VertexShaderID = glCreateShader(GL_VERTEX_SHADER);
    GLuint FragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);

    // Read the Vertex Shader code from the file
    std::string VertexShaderCode;
    std::ifstream VertexShaderStream(vertex_file_path, std::ios::in);
    if(VertexShaderStream.is_open()){
        std::string Line = "";
        while(getline(VertexShaderStream, Line))
            VertexShaderCode += "\n" + Line;
        VertexShaderStream.close();
    }else{
        printf("Could not open %s !\n", vertex_file_path);
        getchar();
        return 0;
    }

    // Read the Fragment Shader code from the file
    std::string FragmentShaderCode;
    std::ifstream FragmentShaderStream(fragment_file_path, std::ios::in);
    if(FragmentShaderStream.is_open()){
        std::string Line = "";
        while(getline(FragmentShaderStream, Line))
            FragmentShaderCode += "\n" + Line;
        FragmentShaderStream.close();
    }else{
        printf("Could not open %s !\n", fragment_file_path);
        getchar();
        return 0;
    }

    GLint Result = GL_FALSE;
    int InfoLogLength;

    // Compile Vertex Shader
    printf("Compiling shader : %s\n", vertex_file_path);
    char const * VertexSourcePointer = VertexShaderCode.c_str();
    glShaderSource(VertexShaderID, 1, &VertexSourcePointer , NULL);
    glCompileShader(VertexShaderID);

    // Check Vertex Shader
    glGetShaderiv(VertexShaderID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(VertexShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if ( InfoLogLength > 0 ){
        std::vector<char> VertexShaderErrorMessage(InfoLogLength+1);
        glGetShaderInfoLog(VertexShaderID, InfoLogLength, NULL, &VertexShaderErrorMessage[0]);
        printf("%s\n", &VertexShaderErrorMessage[0]);
    }

    // Compile Fragment Shader
    printf("Compiling shader : %s\n", fragment_file_path);
    char const * FragmentSourcePointer = FragmentShaderCode.c_str();
    glShaderSource(FragmentShaderID, 1, &FragmentSourcePointer , NULL);
    glCompileShader(FragmentShaderID);

    // Check Fragment Shader
    glGetShaderiv(FragmentShaderID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(FragmentShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if ( InfoLogLength > 0 ){
        std::vector<char> FragmentShaderErrorMessage(InfoLogLength+1);
        glGetShaderInfoLog(FragmentShaderID, InfoLogLength, NULL, &FragmentShaderErrorMessage[0]);
        printf("%s\n", &FragmentShaderErrorMessage[0]);
    }

    // Link the program
    // Create the Shader Program Object
    printf("Linking program\n");
    GLuint ProgramID = glCreateProgram();
    glAttachShader(ProgramID, VertexShaderID);
    glAttachShader(ProgramID, FragmentShaderID);
    glLinkProgram(ProgramID);

    // Check the program
    glGetProgramiv(ProgramID, GL_LINK_STATUS, &Result);
    glGetProgramiv(ProgramID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if ( InfoLogLength > 0 ){
        std::vector<char> ProgramErrorMessage(InfoLogLength+1);
        glGetProgramInfoLog(ProgramID, InfoLogLength, NULL, &ProgramErrorMessage[0]);
        printf("%s\n", &ProgramErrorMessage[0]);
    }

    glDeleteShader(VertexShaderID);
    glDeleteShader(FragmentShaderID);

    return ProgramID;
}
using namespace std;
CUBE *rublicx;
GLuint MatrixID;


static void error_callback(int error, const char *description)
{
    fputs(description, stderr);
}
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (action == GLFW_PRESS)
        switch (key)
        {
            case GLFW_KEY_R :
                rublicx->rotate1(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_T :
                rublicx->rotate2(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_Y :
                rublicx->rotate3(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_F :
                rublicx->rotate4(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_G :
                rublicx->rotate5(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_H :
                rublicx->rotate6(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_V :
                rublicx->rotate7(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_B :
                rublicx->rotate8(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case GLFW_KEY_N :
                rublicx->rotate9(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                break;
            case 262:

                Xcam = rayon * sin(radians(cptx));
                cptx=cptx+3;
                Zcam = rayon * cos(radians(cptz));
                cptz=cptz+3;

                break;
            case 263:
                Xcam = rayon * sin(radians(cptx));
                cptx=cptx-3;
                Zcam = rayon * cos(radians(cptz));
                cptz=cptz-3;
                break;

            case GLFW_KEY_SPACE:
                srand(std::time(0));
                for (int i=0;i<15;i++){
                    int shuff =rand()%9;
                    switch (shuff) {
                        case 0:
                            rublicx->rotate1(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 1:
                            rublicx->rotate2(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 2:
                            rublicx->rotate3(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 3:
                            rublicx->rotate4(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 4:
                            rublicx->rotate5(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 5:
                            rublicx->rotate6(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 6:
                            rublicx->rotate7(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 7:
                            rublicx->rotate8(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case 8:
                            rublicx->rotate9(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                    }

                }
                break;
            case GLFW_KEY_LEFT_SHIFT:
                int l=actions.length();
                for(int i=l-1;i>=0;i--) {
                    switch (actions[i]) {
                        case '1' :
                            rublicx->rotate1(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate1(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate1(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '2' :
                            rublicx->rotate2(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate2(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate2(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '3' :
                            rublicx->rotate3(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate3(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate3(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '4' :
                            rublicx->rotate4(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate4(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate4(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '5' :
                            rublicx->rotate5(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate5(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate5(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '6' :
                            rublicx->rotate6(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate6(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate6(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '7' :
                            rublicx->rotate7(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate7(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate7(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '8' :
                            rublicx->rotate8(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate8(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate8(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        case '9' :
                            rublicx->rotate9(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate9(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            rublicx->rotate9(&Projection,&View,&Model,MVP,&MatrixID,window,&actions);
                            break;
                        default:
                            break;
                    }

                }
                actions.clear();
                break;

        }
}

void Resize(GLFWwindow* window, int width, int height)
{
    glViewport(0,0,width,height);
}

int main()
{


    if (!glfwInit())
        exit(EXIT_FAILURE);
    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR , 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window;

    glfwSetErrorCallback(error_callback);
    window = glfwCreateWindow(640, 480, "OpenGL TP 1", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        return -1;
    }

    glfwSetFramebufferSizeCallback(window, Resize);

    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback) ;
    rublicx=new CUBE();
    GLuint ShaderProgram=LoadShaders("C:\\Users\\SALIM\\CLionProjects\\clion-glfw-master\\shader\\SimpleVertexShader.vertexshader","C:\\Users\\SALIM\\CLionProjects\\clion-glfw-master\\shader\\SimpleFragmentShader.fragmentshader");

    Projection = perspective(radians(45.0f), 4.0f / 3.0f, 0.1f, 100.0f);
    Model = mat4(1.0f);




    MatrixID = glGetUniformLocation(ShaderProgram, "MVP");
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    View = lookAt(vec3(Xcam, Ycam, Zcam),vec3(0,0,0),vec3(0,1,0) );

    glUseProgram(ShaderProgram);
    glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &MVP[0][0]);



    while (!glfwWindowShouldClose(window))
    {   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT) ;


        //
        View = lookAt(vec3(Xcam, Ycam, Zcam),vec3(0,0,0),vec3(0,1,0) );




        rublicx->render(&Projection,&View,&Model,MVP,&MatrixID);





        glfwSwapBuffers(window);
        glfwPollEvents();

        //- Lier le VAO :




    }
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}