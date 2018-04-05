#include<windows.h>
#include<GL/glut.h>
#include<GL/gl.h>

void init()
{
	
	glClearColor(0.03, 0.0, 0.23, 1);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 800, 0.0, 800);
}

void myHouse()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);  //side wall
	glVertex2i(275, 362);
	glVertex2i(400, 337);
	glVertex2i(400, 100);
	glVertex2i(275, 175);
	glEnd();   //end side wall

	glColor3f(1.0, 0.28, 0.64);
	glBegin(GL_POLYGON);  //side roof
	glVertex2i(475, 450);
	glVertex2i(387, 337);
	glVertex2i(250, 350);
	glEnd();   //end 

	

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);  //main wall
	glVertex2i(400, 337);
	glVertex2i(650, 362);
	glVertex2i(650, 250);
	glVertex2i(400, 100);
	glEnd();   //end 

	glColor3f(1.0, 0.28, 0.64);
	glBegin(GL_POLYGON);  //main roof
	glVertex2i(475, 450);
	glVertex2i(562, 450);
	glVertex2i(662, 362);
	glVertex2i(387, 337);

	glEnd();   //end 


	glColor3f(0.6, 0.9, 0.7);
	glBegin(GL_POLYGON);  //door
	glVertex2i(525, 250);
	glVertex2i(570, 273);
	glVertex2i(570, 200);
	glVertex2i(525, 175);
	glEnd();   //end 

	glColor3f(0.1, 0.3, 0.2);
	glBegin(GL_POLYGON);  //front border
	glVertex2i(650, 255);
	glVertex2i(675, 250);
	glVertex2i(400, 80);
	glVertex2i(400, 100);
	glEnd();   //end 

	glColor3f(0.1, 0.3, 0.2);
	glBegin(GL_POLYGON);  //small behind border
	glVertex2i(250, 175);
	glVertex2i(275, 187);
	glVertex2i(275, 175);
	glEnd();   //end 

	glColor3f(0.1, 0.3, 0.2);
	glBegin(GL_POLYGON);  //side border
	glVertex2i(250, 175);
	glVertex2i(275,175);
	glVertex2i(400, 100);
	glVertex2i(400, 80);
	glEnd();   //end 

	glColor3f(0.6, 0.9, 0.7);
	glBegin(GL_POLYGON);  //left window
	glVertex2i(425, 200);
	glVertex2i(475, 225);
	glVertex2i(475, 187);
	glVertex2i(425, 162);
	glEnd();   //end 

	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(5);
	glBegin(GL_LINES);  //line lwindow
	glVertex2i(450, 212);
	glVertex2i(450, 175);
	glVertex2i(425, 180);
	glVertex2i(475, 205);
	glEnd();   //end 

	glColor3f(0.6, 0.9, 0.7);
	glBegin(GL_POLYGON);  //right window
	glVertex2i(587, 280);
	glVertex2i(625, 300);
	glVertex2i(625, 270);
	glVertex2i(587, 249);
	glEnd();   //end 

	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(5);
	glBegin(GL_LINES);  //line rwindow
	glVertex2i(606, 290);
	glVertex2i(606, 255);
	glVertex2i(587, 264);
	glVertex2i(625, 285);
	glEnd();   //end 

	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(5);
	glBegin(GL_LINES);  //line lwindow
	glVertex2i(475, 450);
	glVertex2i(387, 337);
	glEnd();   //end 

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);  //right window
	glVertex2i(0, 800);
	glVertex2i(800, 800);
	glVertex2i(800, 600);
	glVertex2i(0, 600);
	glEnd();   //end 

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);  //big star
	glVertex2i(275, 675);
	glVertex2i(325, 675);
	glVertex2i(300, 650);
	glEnd();   //end 

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);  //big star
	glVertex2i(275, 662);
	glVertex2i(300, 687);
	glVertex2i(325, 662);
	glEnd();   //end 

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);  //small star
	glVertex2i(512, 750);
	glVertex2i(537, 750);
	glVertex2i(525, 737);
	glEnd();   //end 

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);  //small star
	glVertex2i(512, 745);
	glVertex2i(525, 755);
	glVertex2i(537, 745);
	glEnd();   //end 


	glFlush();
}

/*main function
initializes a window on the screen*/

int main(int argc, char **argv)
{

	glutInit(&argc, argv);

	//state the color model n buffer type
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	//state where the window pop up or window position where the origin is at top left
	glutInitWindowPosition(100, 100);

	//state where the window size (pixel)-width, height)
	glutInitWindowSize(800, 800);

	//create window
	glutCreateWindow("HelloWorld");

	init();

	glutDisplayFunc(myHouse);

	//entering looping
	glutMainLoop();

}
