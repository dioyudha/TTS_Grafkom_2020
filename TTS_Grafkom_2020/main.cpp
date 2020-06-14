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
void plushitam() {

		//1
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

		//2
		glBegin(GL_POLYGON);
			glVertex2f(560, 30);
			glVertex2f(560, 170);
			glVertex2f(600, 170);
			glVertex2f(600, 30);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(510, 80);
			glVertex2f(510, 120);
			glVertex2f(650, 120);
			glVertex2f(650, 80);
		glEnd();

		//3
		glBegin(GL_POLYGON);
			glVertex2f(80, 190);
			glVertex2f(80, 330);
			glVertex2f(120, 330);
			glVertex2f(120, 190);
			glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(30, 240);
			glVertex2f(30, 280);
			glVertex2f(170, 280);
			glVertex2f(170, 240);
			glEnd();

			//4
		glBegin(GL_POLYGON);
			glVertex2f(400, 190);
			glVertex2f(400, 330);
			glVertex2f(440, 330);
			glVertex2f(440, 190);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(350, 240);
			glVertex2f(350, 280);
			glVertex2f(490, 280);
			glVertex2f(490, 240);
		glEnd();

		//5
		glBegin(GL_POLYGON);
			glVertex2f(720, 190);
			glVertex2f(720, 330);
			glVertex2f(760, 330);
			glVertex2f(760, 190);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(670, 240);
			glVertex2f(670, 280);
			glVertex2f(800, 280);
			glVertex2f(800, 240);
		glEnd();

		//6
		glBegin(GL_POLYGON);
			glVertex2f(240, 350);
			glVertex2f(240, 490);
			glVertex2f(280, 490);
			glVertex2f(280, 350);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(190, 400);
			glVertex2f(190, 440);
			glVertex2f(330, 440);
			glVertex2f(330, 400);
		glEnd();

		//7
		glBegin(GL_POLYGON);
			glVertex2f(560, 350);
			glVertex2f(560, 490);
			glVertex2f(600, 490);
			glVertex2f(600, 350);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(510, 400);
			glVertex2f(510, 440);
			glVertex2f(650, 440);
			glVertex2f(650, 400);
		glEnd();

		//8
		glBegin(GL_POLYGON);
			glVertex2f(80, 510);
			glVertex2f(80, 650);
			glVertex2f(120, 650);
			glVertex2f(120, 510);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(30, 560);
			glVertex2f(30, 600);
			glVertex2f(170, 600);
			glVertex2f(170, 560);
		glEnd();

		//9
		glBegin(GL_POLYGON);
			glVertex2f(400, 510);
			glVertex2f(400, 650);
			glVertex2f(440, 650);
			glVertex2f(440, 510);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(350, 560);
			glVertex2f(350, 600);
			glVertex2f(490, 600);
			glVertex2f(490, 560);
		glEnd();

		//10
		glBegin(GL_POLYGON);
			glVertex2f(720, 510);
			glVertex2f(720, 650);
			glVertex2f(760, 650);
			glVertex2f(760, 510);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(670, 560);
			glVertex2f(670, 600);
			glVertex2f(810, 600);
			glVertex2f(810, 560);
		glEnd();

		//11
		glBegin(GL_POLYGON);
			glVertex2f(230, 670);
			glVertex2f(230, 810);
			glVertex2f(270, 810);
			glVertex2f(270, 670);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(190, 720);
			glVertex2f(190, 760);
			glVertex2f(320, 760);
			glVertex2f(320, 720);
		glEnd();

		//12
		glBegin(GL_POLYGON);
			glVertex2f(560, 670);
			glVertex2f(560, 810);
			glVertex2f(600, 810);
			glVertex2f(600, 670);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex2f(510, 720);
			glVertex2f(510, 760);
			glVertex2f(650, 760);
			glVertex2f(650, 720);
		glEnd();
	glFlush();
}
void kotaktengah() {
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
void kotakdalamhitam() {

	glFlush();
}

void render() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	outline();
	kotakputih();
	plushitam();
	kotaktengah();

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