//
//  main.c
//  C
//
//  Created by 野中明 on 2017/06/22.
//  Copyright © 2017年 mycompany. All rights reserved.


#include <stdio.h>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>

void display(void)
{
}

int main(int argc, char * argv[])
{
    glutInit(&argc, argv);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
