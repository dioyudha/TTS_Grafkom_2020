#include <iostream> 
#include <GL/glut.h>

void outline() {

	glBegin(GL_POLYGON);
	glColor3ub(246, 193, 32);
	glVertex2f(0, 0);
	glVertex2f(0, 1100);
	glVertex2f(1100, 1100);
	glVertex2f(1100, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex2f(50, 50);
	glVertex2f(50, 1050);
	glVertex2f(1050, 1050);
	glVertex2f(1050, 50);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(75, 75);
	glVertex2f(75, 1025);
	glVertex2f(1025, 1025);
	glVertex2f(1025, 75);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(90, 90);
	glVertex2f(90, 1010);
	glVertex2f(1010, 1010);
	glVertex2f(1010, 90);
	glEnd();

	glFlush();
}
void pertama() {

	glBegin(GL_POLYGON);
	glColor3ub(192, 192, 192);
	glVertex2f(390, 110);
	glVertex2f(390, 230);
	glVertex2f(560, 230);
	glVertex2f(560, 110);
	glEnd();

	glFlush();
}
void kedua() {

	glBegin(GL_TRIANGLES);
	glColor3ub(128, 128, 128);
	glVertex2f(50, 340);
	glVertex2f(30, 360);
	glVertex2f(70, 360);
	glEnd();

	glFlush();
}

void render() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	outline();
	pertama();
	kedua();

}
int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Dio Yudha Perdana 672018165");
	glutDisplayFunc(render);
	gluOrtho2D(0, 1100,1100, 0);
	glutMainLoop();

	return 0;
}