#include <gl\glew.h>
#include <gl\freeglut.h>
#include <cmath>
#include <iostream>


double rotatex = 0;
double rotatey = 0;
double rotatez = 0;

void display()
{
	glClearColor(1, 1, 1, 0);
	//Clear display window
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glRotatef(rotatex, 1, 0, 0);
	glRotatef(rotatey, 0, 1, 0);
	glRotatef(rotatez, 0, 0, 1);

	glPushMatrix();
	//Set Line segment color as glColor3f(R,G,B)
	glColor3f(1, 0, 0);
	glTranslatef(-0.5,0, 0);
	glutWireTeapot(0.3);

	glLoadIdentity();
	glColor3f(0,1,0);
	glPopMatrix();
	glTranslatef(0.5,0,0);
	glutSolidTeapot(0.3);


	//glutSolidTeapot(0.4);
	

	glutSwapBuffers();
}
void myKeyboard(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:
		rotatex += 5;
		break;

	case GLUT_KEY_DOWN:
		rotatex -= 5;
		break;

	case GLUT_KEY_LEFT:
		rotatey += 5;
		break;

	case GLUT_KEY_RIGHT:
		rotatey -= 5;
		break;
	}
	glutPostRedisplay();
}

	int main(int argc, char ** argv) {
		//initialize GLUT
		glutInit(&argc, argv);
		//Set Display mode
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
		//set display window width and height
		glutInitWindowSize(800, 600);
		//set top - left display window position
		glutInitWindowPosition(250, 60);
		//create display window with the given title
		glutCreateWindow("Teapot  ");
		glutDisplayFunc(display);
		glutSpecialFunc(myKeyboard);
		glutMainLoop();

		return 0;
	}

