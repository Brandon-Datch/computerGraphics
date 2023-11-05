#include<windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    // Vertex 1 (red)
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.6, -0.6);

    // Vertex 2 (green)
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.6, -0.6);

    // Vertex 3 (blue)
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.0, 0.6);

    glEnd();

    glFlush();
}

int main() {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("A Simple Colored Triangle");

    glClearColor(0.0, 0.0, 0.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

