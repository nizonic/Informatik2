#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

float x, y, u;
int d;


void l (float dx, float dy) {
    glBegin(GL_LINES);
    x=x+dx;
    y=y+dy;
    glVertex2f(x,y);
    glVertex2f(x,y);
    glEnd();
    glutSwapBuffers();
}
