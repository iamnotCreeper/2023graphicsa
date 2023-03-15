#include <GL/glut.h>

float angle = 0;

void display()

{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(0,1,0);///綠色
    glPushMatrix();
    glutSolidCube(0.5);
    glPushMatrix();
        glTranslated(0.25,0.25,0);///把整個東西掛在右上角
        glRotated(angle,0,0,1);///轉動
        glTranslatef(0.25,0.25,0);///把旋轉中心放到中心
        glColor3f(1,0,0);///紅色
        glutSolidCube(0.5);
    glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();

    angle++;

}



int main(int argc, char *argv[])



{

        glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("GLUT Shapes");

	glutDisplayFunc(display);

	glutIdleFunc(display);

	 glutMainLoop();

}
