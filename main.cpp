#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3ub(172, 115, 57);
    glVertex2f(-0.0, -0.65f); ///TL
    glVertex2f(-0.9f, -0.35f); ///TR
    glVertex2f(-0.9f, -0.45f); ///BR
    glVertex2f(-0.0f, -0.75f); ///BL
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 230, 230);
    glVertex2f(-0.0, 0.45f); ///TL
    glVertex2f(0.7f, 0.35f); ///TR
    glVertex2f(0.7f, -0.35f); ///BR
    glVertex2f(0.0, -0.65f); ///BL
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(0.30, 0.55f); ///TL
    glVertex2f(0.4f, 0.65f); ///TR
    glVertex2f(0.4f, -0.20f); ///BR
    glVertex2f(0.30, -0.25f); ///BL
    glEnd();
    glScalef(0.75,0.75,1);
    glTranslatef(-.2,-.2,0);
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(0.30, 0.55f); ///TL
    glVertex2f(0.4f, 0.65f); ///TR
    glVertex2f(0.4f, -0.20f); ///BR
    glVertex2f(0.30, -0.25f); ///BL
    glEnd();
    glLoadIdentity();
    glLoadIdentity();

    glScalef(0.75,0.65,1);
    glTranslatef(.4,-.2,0);
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(0.30, 0.55f); ///TL
    glVertex2f(0.4f, 0.65f); ///TR
    glVertex2f(0.4f, -0.20f); ///BR
    glVertex2f(0.30, -0.25f); ///BL
    glEnd();
    glLoadIdentity();
    glLoadIdentity();

    glBegin(GL_TRIANGLES);
    glColor3ub(230, 230, 230);
    glVertex2f(0.35, 0.99f); ///TL
    glVertex2f(0.0f, 0.45f); ///TR
    glVertex2f(0.7f, 0.35f); ///BR
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(191, 191, 191);
    glVertex2f(-0.0, 0.45f); ///TL
    glVertex2f(-0.9f, 0.35f); ///TR
    glVertex2f(-0.9f, -0.35f); ///BR
    glVertex2f(0.0, -0.65f); ///BL
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-0.8, 0.25f); ///TL
    glVertex2f(-0.7f, 0.25f); ///TR
    glVertex2f(-0.7f, -0.35f); ///BR
    glVertex2f(-0.8, -0.35f); ///BL
    glEnd();

    glTranslatef(0.25,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-0.8, 0.25f); ///TL
    glVertex2f(-0.7f, 0.25f); ///TR
    glVertex2f(-0.7f, -0.35f); ///BR
    glVertex2f(-0.8, -0.35f); ///BL
    glEnd();
    glTranslatef(0.25,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-0.8, 0.25f); ///TL
    glVertex2f(-0.7f, 0.25f); ///TR
    glVertex2f(-0.7f, -0.35f); ///BR
    glVertex2f(-0.8, -0.35f); ///BL
    glEnd();
    glLoadIdentity();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(172, 115, 57);
    glVertex2f(-0.65, 0.90f); ///TL
    glVertex2f(0.35f, 0.99); ///TR
    glVertex2f(-0.0f, 0.30f); ///BR
    glVertex2f(-0.95, 0.30f); ///BL
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(172, 115, 57);
    glVertex2f(-0.0, -0.65f); ///TL
    glVertex2f(0.7f, -0.35f); ///TR
    glVertex2f(0.7f, -0.45f); ///BR
    glVertex2f(-0.0f, -0.75f); ///BL
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(172, 115, 57);
    glVertex2f(0.35f, 0.99f); ///TL
    glVertex2f(0.75f, 0.35f); ///TR
    glVertex2f(0.74f, 0.30f); ///BR
    glVertex2f(0.30f, 0.94f); ///BL
    glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(900, 540);
	glutCreateWindow("LAB EXAM (17-35860-3)");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
