#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glBegin(GL_POLYGON);
   glVertex2f(-0.500, 0.596);
    glVertex2f(-0.480, 0.532);
    glVertex2f(-0.452, 0.440);
    glVertex2f(-0.432, 0.328);
    glVertex2f(-0.432, 0.180);
    glVertex2f(-0.352, 0.320);
    glVertex2f(-0.348, 0.152);
    glVertex2f(-0.216, 0.156);
    glVertex2f(-0.236, 0.280);
    glVertex2f(-0.228, 0.516);
    glVertex2f(-0.272, 0.696);
    glVertex2f(-0.428, 0.784);
    glVertex2f(-0.496, 0.732);
    glEnd();

    glBegin(GL_LINE_LOOP);
   glVertex2f(-0.156, 0.232);
    glVertex2f(-0.156, 0.216);
    glVertex2f(-0.016, 0.160);
    glVertex2f(0.112, 0.116);
    glVertex2f(0.164, 0.060);
    glVertex2f(0.236, -0.068);
    glVertex2f(0.284, -0.244);
    glVertex2f(0.336, -0.480);
    glVertex2f(0.384, -0.648);
    glVertex2f(0.496, -0.600);
    glVertex2f(0.524, -0.164);
    glVertex2f(0.516, 0.092);
    glEnd();
    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    float X = (x-250)/250.0;
    float Y = -(y-250)/250.0;
    if(state==GLUT_DOWN){
        printf("    glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
}
