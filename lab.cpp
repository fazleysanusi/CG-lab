#include
<gl\glew.h>#include
<gl\freeglut.h>#include
<cmath>#include
<iostream>#include
<cstdio>
double rotatex = 0;
double rotatey =0;
double rotatez = 0;int xOrigin =-1;
void initGL(){        
    glClearColor(1, 1, 1,0);   
    glClearDepth(1.0f);    
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);  
    glEnable(GL_LIGHT0);   
    glEnable(GL_COLOR_MATERIAL);
    glMatrixMode(GL_PROJECTION);
}

void display(){       
    glClearColor(1, 1, 1,0);   //Clear displaywindow        
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);       
    glLoadIdentity();       
    glRotatef(rotatex, 1, 0, 0);   
    glRotatef(rotatey, 0, 1, 0);   
    glRotatef(rotatez, 0, 0, 1);
    glPushMatrix(); //SetLine segment color as glColor3f(R,G,B)        
    glColor3f(1, 0.8,0.4);
//create cylinder quadric object        
//GLUquadricObj*p;   
//p = gluNewQuadric();      
//gluQuadricDrawStyle(p,> GLU_LINE);    
//gluCylinder(p, 0.3, 0.3,0.5, 20,10);
//parameter,base,top,height,vl,hl 
//glColor3f(0.3,0.3,0.3);
glTranslatef(-0.5,0,0);           /
/glutWireSphere(0.3,50,50);
//radius,slice(vertical line),stack(horizontal line)
//glutWireTorus(0.05,0.2,50, 50);donut shape 
//(inner radius,outerradius)       
//glutWireCone(0.2, 0.8,50, 50);
//base,height,vl,hl
glutSolidTeapot(0.3);
glLoadIdentity();               
glPopMatrix();  
glColor3f(0.3, 0.3,> 0.3); 
glTranslatef(0.5,0,0);  
glutSolidTeapot(0.3);
//glutSolidTeapot(0.4);
glutSwapBuffers();}

void mouseButton(int button, int state, int x,int y) {      
    if (button == GLUT_LEFT_BUTTON)     { 
        if(state == GLUT_UP) { 
            xOrigin = -1;          
        }               
        else { 
            xOrigin = x;
        }       
    }      
    glutPostRedisplay();}
    void mouseMOve(int x, int y) {     
        if(xOrigin >= 0) {
            rotatey = (x - xOrigin)*1.0f;
            rotatex = (y - xOrigin)*1.0f;       
        }       
    glutPostRedisplay();
    }
 /*void myKeyboard(int key, int x, int y)
{     switch
 (key) {       case
 GLUT_KEY_UP:          rotatex +=
 5;            break;
       case
 GLUT_KEY_DOWN:                rotatex -=
 5;            break;
       case
 GLUT_KEY_LEFT:                rotatey +=
 5;            break;
       case
 GLUT_KEY_RIGHT:               rotatey -=
 5;            break;  }       */
       
 int main(int argc, char ** argv) {  //initialize GLUT          
 glutInit(&argc, argv);  //Set Displaymode          
 glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB | GLUT_DEPTH); //set display window width and height           
 glutInitWindowSize(800, 600);     //set top - left display window position      
 glutInitWindowPosition(250, 60);   //create display window with the given title 
 glutCreateWindow("Teapot");         
 glutDisplayFunc(display);   
 glutMouseFunc(mouseButton); 
 glutMotionFunc(mouseMOve);  
 glutMainLoop();
 return 0; 
 }
