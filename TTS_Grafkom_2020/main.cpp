#include <iostream> 
#include <GL/glut.h>

void outline() {

	glBegin(GL_QUADS);
	glColor3ub(246, 193, 32);
		glVertex2f(0, 0);
		glVertex2f(0, 840);
		glVertex2f(840, 840);
		glVertex2f(840, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
		glVertex2f(10, 10);
		glVertex2f(10, 830);
		glVertex2f(830, 830);
		glVertex2f(830, 10);
	glEnd();

	glBegin(GL_QUADS);
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
			glVertex2f(810, 280);
			glVertex2f(810, 240);
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
			glVertex2f(240, 670);
			glVertex2f(240, 810);
			glVertex2f(280, 810);
			glVertex2f(280, 670);
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
	//1
	glBegin(GL_POLYGON);
	glColor3ub(246, 193, 32);
	glVertex2f(260, 70);
	glVertex2f(230, 100);
	glVertex2f(260, 130);
	glVertex2f(290, 100);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glVertex2f(580, 70);
	glVertex2f(550, 100);
	glVertex2f(580, 130);
	glVertex2f(610, 100);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glVertex2f(100, 230);
	glVertex2f(70, 260);
	glVertex2f(100, 290);
	glVertex2f(130, 260);
	glEnd();
	//4
	glBegin(GL_POLYGON);
	glVertex2f(420, 230);
	glVertex2f(390, 260);
	glVertex2f(420, 290);
	glVertex2f(450, 260);
	glEnd();
	//5
	glBegin(GL_POLYGON);
	glVertex2f(740, 230);
	glVertex2f(710, 260);
	glVertex2f(740, 290);
	glVertex2f(770, 260);
	glEnd();
	//6
	glBegin(GL_POLYGON);
	glVertex2f(260, 390);
	glVertex2f(230, 420);
	glVertex2f(260, 450);
	glVertex2f(290, 420);
	glEnd();
	//7
	glBegin(GL_POLYGON);
	glVertex2f(580, 390);
	glVertex2f(550, 420);
	glVertex2f(580, 450);
	glVertex2f(610, 420);
	glEnd();
	//8
	glBegin(GL_POLYGON);
	glVertex2f(100, 550);
	glVertex2f(70, 580);
	glVertex2f(100, 610);
	glVertex2f(130, 580);
	glEnd();
	//9
	glBegin(GL_POLYGON);
	glVertex2f(420, 550);
	glVertex2f(390, 580);
	glVertex2f(420, 610);
	glVertex2f(450, 580);
	glEnd();
	//10
	glBegin(GL_POLYGON);
	glVertex2f(740, 550);
	glVertex2f(710, 580);
	glVertex2f(740, 610);
	glVertex2f(770, 580);
	glEnd();
	//11
	glBegin(GL_POLYGON);
	glVertex2f(260, 710);
	glVertex2f(230, 740);
	glVertex2f(260, 770);
	glVertex2f(290, 740);
	glEnd();
	//12
	glBegin(GL_POLYGON);
	glVertex2f(580, 710);
	glVertex2f(550, 740);
	glVertex2f(580, 770);
	glVertex2f(610, 740);
	glEnd();

	glFlush();
}
void kotaktengah2() {
	//1
	glBegin(GL_POLYGON);
	glColor3ub(178, 34, 34);
	glVertex2f(260, 80);
	glVertex2f(240, 100);
	glVertex2f(260, 120);
	glVertex2f(280, 100);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glVertex2f(580, 80);
	glVertex2f(560, 100);
	glVertex2f(580, 120);
	glVertex2f(600, 100);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glVertex2f(100, 240);
	glVertex2f(80, 260);
	glVertex2f(100, 280);
	glVertex2f(120, 260);
	glEnd();
	//4
	glBegin(GL_POLYGON);
	glVertex2f(420, 240);
	glVertex2f(400, 260);
	glVertex2f(420, 280);
	glVertex2f(440, 260);
	glEnd();
	//5
	glBegin(GL_POLYGON);
	glVertex2f(740, 240);
	glVertex2f(720, 260);
	glVertex2f(740, 280);
	glVertex2f(760, 260);
	glEnd();
	//6
	glBegin(GL_POLYGON);
	glVertex2f(260, 400);
	glVertex2f(240, 420);
	glVertex2f(260, 440);
	glVertex2f(280, 420);
	glEnd();
	//7
	glBegin(GL_POLYGON);
	glVertex2f(580, 400);
	glVertex2f(560, 420);
	glVertex2f(580, 440);
	glVertex2f(600, 420);
	glEnd();
	//8
	glBegin(GL_POLYGON);
	glVertex2f(100, 560);
	glVertex2f(80, 580);
	glVertex2f(100, 600);
	glVertex2f(120, 580);
	glEnd();
	//9
	glBegin(GL_POLYGON);
	glVertex2f(420, 560);
	glVertex2f(400, 580);
	glVertex2f(420, 600);
	glVertex2f(440, 580);
	glEnd();
	//10
	glBegin(GL_POLYGON);
	glVertex2f(740, 560);
	glVertex2f(720, 580);
	glVertex2f(740, 600);
	glVertex2f(760, 580);
	glEnd();
	//11
	glBegin(GL_POLYGON);
	glVertex2f(260, 720);
	glVertex2f(240, 740);
	glVertex2f(260, 760);
	glVertex2f(280, 740);
	glEnd();
	//12
	glBegin(GL_POLYGON);
	glVertex2f(580, 720);
	glVertex2f(560, 740);
	glVertex2f(580, 760);
	glVertex2f(600, 740);
	glEnd();
	glFlush();
}
void garisdlmkotak() {
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex2f(260, 80);
	glVertex2f(240, 100);
	glVertex2f(260, 120);
	glVertex2f(280, 100);
	glEnd(); 
	//2
	glBegin(GL_LINE_LOOP);
	glVertex2f(580, 80);
	glVertex2f(560, 100);
	glVertex2f(580, 120);
	glVertex2f(600, 100);
	glEnd();
	//3
	glBegin(GL_LINE_LOOP);
	glVertex2f(100, 240);
	glVertex2f(80, 260);
	glVertex2f(100, 280);
	glVertex2f(120, 260);
	glEnd();
	//4
	glBegin(GL_LINE_LOOP);
	glVertex2f(420, 240);
	glVertex2f(400, 260);
	glVertex2f(420, 280);
	glVertex2f(440, 260);
	glEnd();
	//5
	glBegin(GL_LINE_LOOP);
	glVertex2f(740, 240);
	glVertex2f(720, 260);
	glVertex2f(740, 280);
	glVertex2f(760, 260);
	glEnd();
	//6
	glBegin(GL_LINE_LOOP);
	glVertex2f(260, 400);
	glVertex2f(240, 420);
	glVertex2f(260, 440);
	glVertex2f(280, 420);
	glEnd();
	//7
	glBegin(GL_LINE_LOOP);
	glVertex2f(580, 400);
	glVertex2f(560, 420);
	glVertex2f(580, 440);
	glVertex2f(600, 420);
	glEnd();
	//8
	glBegin(GL_LINE_LOOP);
	glVertex2f(100, 560);
	glVertex2f(80, 580);
	glVertex2f(100, 600);
	glVertex2f(120, 580);
	glEnd();
	//9
	glBegin(GL_LINE_LOOP);
	glVertex2f(420, 560);
	glVertex2f(400, 580);
	glVertex2f(420, 600);
	glVertex2f(440, 580);
	glEnd();
	//10
	glBegin(GL_LINE_LOOP);
	glVertex2f(740, 560);
	glVertex2f(720, 580);
	glVertex2f(740, 600);
	glVertex2f(760, 580);
	glEnd();
	//11
	glBegin(GL_LINE_LOOP);
	glVertex2f(260, 720);
	glVertex2f(240, 740);
	glVertex2f(260, 760);
	glVertex2f(280, 740);
	glEnd();
	//12
	glBegin(GL_LINE_LOOP);
	glVertex2f(580, 720);
	glVertex2f(560, 740);
	glVertex2f(580, 760);
	glVertex2f(600, 740);
	glEnd();

		glFlush();
}
void kotakhitam() {
	//1
	glBegin(GL_POLYGON);
	glColor3ub(178, 34, 34);
	glVertex2f(50, 50);
	glVertex2f(50, 150);
	glVertex2f(150, 150);
	glVertex2f(150, 50);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glVertex2f(370, 50);
	glVertex2f(370, 150);
	glVertex2f(470, 150);
	glVertex2f(470, 50);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glVertex2f(690, 50);
	glVertex2f(690, 150);
	glVertex2f(790, 150);
	glVertex2f(790, 50);
	glEnd();
	//4
	glBegin(GL_POLYGON);
	glVertex2f(210, 210);
	glVertex2f(210, 310);
	glVertex2f(310, 310);
	glVertex2f(310, 210);
	glEnd();
	//5
	glBegin(GL_POLYGON);
	glVertex2f(530, 210);
	glVertex2f(530, 310);
	glVertex2f(630, 310);
	glVertex2f(630, 210);
	glEnd();
	//6
	glBegin(GL_POLYGON);
	glVertex2f(50, 370);
	glVertex2f(50, 470);
	glVertex2f(150, 470);
	glVertex2f(150, 370);
	glEnd();
	//7
	glBegin(GL_POLYGON);
	glVertex2f(370, 370);
	glVertex2f(370, 470);
	glVertex2f(470, 470);
	glVertex2f(470, 370);
	glEnd();
	//8
	glBegin(GL_POLYGON);
	glVertex2f(690, 370);
	glVertex2f(690, 470);
	glVertex2f(790, 470);
	glVertex2f(790, 370);
	glEnd();
	//9
	glBegin(GL_POLYGON);
	glVertex2f(210, 530);
	glVertex2f(210, 630);
	glVertex2f(310, 630);
	glVertex2f(310, 530);
	glEnd();
	//10
	glBegin(GL_POLYGON);
	glVertex2f(530, 530);
	glVertex2f(530, 630);
	glVertex2f(630, 630);
	glVertex2f(630, 530);
	glEnd();
	//11
	glBegin(GL_POLYGON);
	glVertex2f(50, 690);
	glVertex2f(50, 790);
	glVertex2f(150, 790);
	glVertex2f(150, 690);
	glEnd();
	//12
	glBegin(GL_POLYGON);
	glVertex2f(370, 690);
	glVertex2f(370, 790);
	glVertex2f(470, 790);
	glVertex2f(470, 690);
	glEnd();
	//13
	glBegin(GL_POLYGON);
	glVertex2f(690, 690);
	glVertex2f(690, 790);
	glVertex2f(790, 790);
	glVertex2f(790, 690);
	glEnd();

	glFlush();
}
void kotakmerah() {
	//1
	glBegin(GL_QUADS);
	glColor3ub(246, 193, 32);
	glVertex2f( 60, 60);
	glVertex2f(60,140 );
	glVertex2f(140, 140);
	glVertex2f(140, 60);
	glEnd();
	//2
	glBegin(GL_QUADS);
	glVertex2f(380, 60);
	glVertex2f(380, 140);
	glVertex2f(460, 140);
	glVertex2f(460, 60);
	glEnd();
	//3
	glBegin(GL_QUADS);
	glVertex2f(700, 60);
	glVertex2f(700, 140);
	glVertex2f(780, 140);
	glVertex2f(780, 60);
	glEnd();
	//4
	glBegin(GL_QUADS);
	glVertex2f(220, 220);
	glVertex2f(220, 300);
	glVertex2f(300, 300);
	glVertex2f(300, 220);
	glEnd();
	//5
	glBegin(GL_QUADS);
	glVertex2f(540, 220);
	glVertex2f(540, 300);
	glVertex2f(620, 300);
	glVertex2f(620, 220);
	glEnd();
	//6
	glBegin(GL_QUADS);
	glVertex2f(60, 380);
	glVertex2f(60, 460);
	glVertex2f(140, 460);
	glVertex2f(140, 380);
	glEnd();
	//7
	glBegin(GL_QUADS);
	glVertex2f(380, 380);
	glVertex2f(380, 460);
	glVertex2f(460, 460);
	glVertex2f(460, 380);
	glEnd();
	//8
	glBegin(GL_QUADS);
	glVertex2f(700, 380);
	glVertex2f(700, 460);
	glVertex2f(780, 460);
	glVertex2f(780, 380);
	glEnd();
	//9
	glBegin(GL_QUADS);
	glVertex2f(220, 540);
	glVertex2f(220, 620);
	glVertex2f(300, 620);
	glVertex2f(300, 540);
	glEnd();
	//10
	glBegin(GL_QUADS);
	glVertex2f(540, 540);
	glVertex2f(540, 620);
	glVertex2f(620, 620);
	glVertex2f(620, 540);
	glEnd();
	//11
	glBegin(GL_QUADS);
	glVertex2f(60, 700);
	glVertex2f(60, 780);
	glVertex2f(140, 780);
	glVertex2f(140, 700);
	glEnd();
	//12
	glBegin(GL_QUADS);
	glVertex2f(380, 700);
	glVertex2f(380, 780);
	glVertex2f(460, 780);
	glVertex2f(460, 700);
	glEnd();
	//13
	glBegin(GL_QUADS);
	glVertex2f(700, 700);
	glVertex2f(700, 780);
	glVertex2f(780, 780);
	glVertex2f(780, 700);
	glEnd();

	glFlush();
}
void garishitam() {
	glBegin(GL_LINE_LOOP);
	glLineWidth(30);
	glColor3ub(0, 0, 0);
	glVertex2f(60, 60);
	glVertex2f(60, 140);
	glVertex2f(140, 140);
	glVertex2f(140, 60);
		glEnd();
		//2
		glBegin(GL_LINE_LOOP);
		glVertex2f(380, 60);
		glVertex2f(380, 140);
		glVertex2f(460, 140);
		glVertex2f(460, 60);
		glEnd();
		//3
		glBegin(GL_LINE_LOOP);
		glVertex2f(700, 60);
		glVertex2f(700, 140);
		glVertex2f(780, 140);
		glVertex2f(780, 60);
		glEnd();
		//4
		glBegin(GL_LINE_LOOP);
		glVertex2f(220, 220);
		glVertex2f(220, 300);
		glVertex2f(300, 300);
		glVertex2f(300, 220);
		glEnd();
		//5
		glBegin(GL_LINE_LOOP);
		glVertex2f(540, 220);
		glVertex2f(540, 300);
		glVertex2f(620, 300);
		glVertex2f(620, 220);
		glEnd();
		//6
		glBegin(GL_LINE_LOOP);
		glVertex2f(60, 380);
		glVertex2f(60, 460);
		glVertex2f(140, 460);
		glVertex2f(140, 380);
		glEnd();
		//7
		glBegin(GL_LINE_LOOP);
		glVertex2f(380, 380);
		glVertex2f(380, 460);
		glVertex2f(460, 460);
		glVertex2f(460, 380);
		glEnd();
		//8
		glBegin(GL_LINE_LOOP);
		glVertex2f(700, 380);
		glVertex2f(700, 460);
		glVertex2f(780, 460);
		glVertex2f(780, 380);
		glEnd();
		//9
		glBegin(GL_LINE_LOOP);
		glVertex2f(220, 540);
		glVertex2f(220, 620);
		glVertex2f(300, 620);
		glVertex2f(300, 540);
		glEnd();
		//10
		glBegin(GL_LINE_LOOP);
		glVertex2f(540, 540);
		glVertex2f(540, 620);
		glVertex2f(620, 620);
		glVertex2f(620, 540);
		glEnd();
		//11
		glBegin(GL_LINE_LOOP);
		glVertex2f(60, 700);
		glVertex2f(60, 780);
		glVertex2f(140, 780);
		glVertex2f(140, 700);
		glEnd();
		//12
		glBegin(GL_LINE_LOOP);
		glVertex2f(380, 700);
		glVertex2f(380, 780);
		glVertex2f(460, 780);
		glVertex2f(460, 700);
		glEnd();
		//13
		glBegin(GL_LINE_LOOP);
		glVertex2f(700, 700);
		glVertex2f(700, 780);
		glVertex2f(780, 780);
		glVertex2f(780, 700);
		glEnd();
	glFlush();
}

void render() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	outline();
	kotakputih();
	plushitam();
	kotaktengah();
	kotaktengah2();
	garisdlmkotak();
	kotakhitam();
	kotakmerah();
	garishitam();

}
int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Dio Yudha Perdana 672018165");
	glutDisplayFunc(render);
	glLineWidth(3);
	gluOrtho2D(0, 840,840, 0);
	glutMainLoop();

	return 0;
}