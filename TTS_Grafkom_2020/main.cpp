#include <iostream> 
#include <GL/glut.h>

void outline() {

	glBegin(GL_POLYGON);
	glColor3ub(246, 193, 32);
	glVertex2f(0, 0);
	glVertex2f(0, 840);
	glVertex2f(840, 840);
	glVertex2f(840, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex2f(10, 10);
	glVertex2f(10, 830);
	glVertex2f(830, 830);
	glVertex2f(830, 10);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(20, 20);
	glVertex2f(20, 820);
	glVertex2f(820, 820);
	glVertex2f(820, 20);
	glEnd();

	glFlush();
}
void kotakputih() {
	//1
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(180, 20);
	glVertex2f(180, 180);
	glVertex2f(340, 180);
	glVertex2f(340, 20);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glVertex2f(500, 20);
	glVertex2f(500, 180);
	glVertex2f(660, 180);
	glVertex2f(660, 20);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glVertex2f(20, 180);
	glVertex2f(20, 340);
	glVertex2f(180, 340);
	glVertex2f(180, 180);
	glEnd();
	//4
	glBegin(GL_POLYGON);
	glVertex2f(340, 180);
	glVertex2f(340, 340);
	glVertex2f(500, 340);
	glVertex2f(500, 180);
	glEnd();
	//5
	glBegin(GL_POLYGON);
	glVertex2f(660, 180);
	glVertex2f(660, 340);
	glVertex2f(820, 340);
	glVertex2f(820, 180);
	glEnd();
	//6
	glBegin(GL_POLYGON);
	glVertex2f(180, 340);
	glVertex2f(180, 500);
	glVertex2f(340, 500);
	glVertex2f(340, 340);
	glEnd();
	//7
	glBegin(GL_POLYGON);
	glVertex2f(500, 340);
	glVertex2f(500, 500);
	glVertex2f(660, 500);
	glVertex2f(660, 340);
	glEnd();
	//8
	glBegin(GL_POLYGON);
	glVertex2f(20, 500);
	glVertex2f(20, 660);
	glVertex2f(180, 660);
	glVertex2f(180, 500);
	glEnd();
	//9
	glBegin(GL_POLYGON);
	glVertex2f(340, 500);
	glVertex2f(340, 660);
	glVertex2f(500, 660);
	glVertex2f(500, 500);
	glEnd();
	//10
	glBegin(GL_POLYGON);
	glVertex2f(660, 500);
	glVertex2f(660, 660);
	glVertex2f(820, 660);
	glVertex2f(820, 500);
	glEnd();
	//11
	glBegin(GL_POLYGON);
	glVertex2f(180, 660);
	glVertex2f(180, 820);
	glVertex2f(340, 820);
	glVertex2f(340, 660);
	glEnd();
	//12
	glBegin(GL_POLYGON);
	glVertex2f(500, 660);
	glVertex2f(500, 820);
	glVertex2f(660, 820);
	glVertex2f(660, 660);
	glEnd();
	glFlush();

}
void pertama() {

	//plus
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(240, 30);
	glVertex2f(240, 170);
	glVertex2f(280, 170);
	glVertex2f(280, 30);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(190, 80);
	glVertex2f(190, 120);
	glVertex2f(330, 120);
	glVertex2f(330, 80);
	glEnd();
	//kotak tengah
	glBegin(GL_POLYGON);
	glColor3ub(246, 193, 32);
	glVertex2f(260, 70);
	glVertex2f(230, 100);
	glVertex2f(260, 130);
	glVertex2f(290, 100);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex2f(260, 80);
	glVertex2f(240, 100);
	glVertex2f(260, 120);
	glVertex2f(280, 100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex2f(260, 80);
	glVertex2f(240, 100);
	glVertex2f(260, 120);
	glVertex2f(280, 100);
	glEnd();

	glFlush();
}
void kedua() {

}

void render() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	outline();
	kotakputih();
	pertama();


}
int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Dio Yudha Perdana 672018165");
	glutDisplayFunc(render);
	gluOrtho2D(0, 840,840, 0);
	glutMainLoop();

	return 0;
}