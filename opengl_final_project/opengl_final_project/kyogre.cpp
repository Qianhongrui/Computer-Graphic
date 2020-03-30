#include <stdlib.h>
#include <GL/glut.h>

#define _USE_MATH_DEFINES
#include <math.h>
#define Kyogre 1
#define BODY_1 2
#define BODY_2 3
#define BODY_3 4
#define EYE_1 5
#define EYE_2 6
#define FIN_1 7
#define FIN_2 8
#define WING_1 9
#define WING_2 10
#define GRAIN_1 11
#define GRAIN_2 12
#define HEAD 13
#define FINGER_1 14
#define FINGER_2 15
#define FINGER_3 16
#define FINGER_4 17
#define FINGER_5 18
#define FINGER_6 19
#define FINGER_7 20
#define FINGER_8 21
#define TRIP_1 22
#define TRIP_2 23
#define TAIL_1 24
#define TAIL_2 25
#define FRAME 26


//这是一个点的类，用于存储其中点的坐标
class Point
{
public:
	int x, y;
	void setxy(int _x, int _y) {
		x = _x;
		y = _y;
	}
};

//点的数量
//static int POINTSNUM = 0;

//用于存储点的集合,因为绘制的都是4个点的贝塞尔曲线，所以数组大小为4
static Point points[4];

//初始化函数
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0); //设定背景为黑色
	glColor3f(0.0, 0.0, 0.0); //绘图颜色为白色
	glPointSize(2.0); //设定点的大小为2*2像素的
	glMatrixMode(GL_PROJECTION); // 设定合适的矩阵
	glLoadIdentity(); // 是一个无参的无值函数，其功能是用一个4×4的单位矩阵来替换当前矩阵，实际上就是对当前矩阵进行初始化。也就是说，无论以前进行了多少次矩阵变换，在该命令执行后，当前矩阵均恢复成一个单位矩阵，即相当于没有进行任何矩阵变换状态
	gluOrtho2D(0.0, 1080.0, 0.0, 1080.0); //平行投影，四个参数分别是x,y范围
}

//绘制点
void setPoint(Point p) {
	glBegin(GL_POINTS);
	glVertex2f(p.x, p.y);
	glEnd();
	glFlush();
}

// 绘制直线
void chooseType(int type) {
	switch (type) {
	case 1:
		glColor3f(0, 0, 0);
		glLineWidth(1);
		glBegin(GL_LINES);
		break;
	case 2:
		glLineWidth(4);
		glBegin(GL_LINES);
		break;
	case 3:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		break;
	case 4:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(235, 500);
		break;
	case 5:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(780, 450);
		break;
	case 6:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(540, 540);
		break;
	case 7:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(640, 660);
		break;
	case 8:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(232, 485);
		break;
	case 9:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(270, 490);
		break;
	case 10:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(475, 475);
		break;
	case 11:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(270, 445);
		break;
	case 12:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(270, 500);
		break;
	case 13:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(682, 340);
		break;
	case 14:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(810, 380);
		break;
	case 15:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(830, 420);
		break;
	case 16:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(830, 500);
		break;
	case 17:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(552, 520);
		glVertex2f(550, 550);
		break;
	case 18:
		glColor3f(0.93, 0.93, 0.93);
		glBegin(GL_POLYGON);
		glVertex2f(595, 548);
		break;
	case 19:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(270, 636);
		break;
	case 20:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(570, 754);
		break;
	case 21:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(650, 730);
		break;
	case 22:
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);
		//glVertex2f(733,770);
		break;
	case 23:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(890, 700);
		break;
	case 24:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(780, 602);
		break;
	case 25:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(810, 562);
		break;
	case 26:
		glColor3f(0, 0.27, 0.55);
		glBegin(GL_POLYGON);
		glVertex2f(945, 670);
		break;
	}
}

void setline(Point p1, Point p2) {
	/*switch(type){
		case 1:
			glBegin(GL_LINES);
			glVertex2f(p1.x,p1.y);
			glVertex2f(p2.x,p2.y);
			glEnd();
			glLineWidth(1);
			glFlush();

			break;
		case 2:
			glBegin(GL_LINES);
			glVertex2f(p1.x,p1.y);
			glVertex2f(p2.x,p2.y);
			glEnd();
			glLineWidth(4);
			glFlush();
			break;
		case 3:
			glColor3f(0,0.27,0.55);
			glBegin(GL_POLYGON);
			glVertex2f(p1.x,p1.y);
			glVertex2f(p2.x,p2.y);
			//glVertex2f(540,540);
			glEnd();
			glFlush();

			break;



	}*/
	glVertex2f(p1.x, p1.y);
	glVertex2f(p2.x, p2.y);
	/*glEnd();

	glFlush();*/

	//glVertex2f(540,540);

}

// 绘制贝塞尔曲线
Point setBezier(Point p1, Point p2, Point p3, Point p4, double t) {
	Point p;
	double a1 = pow((1 - t), 3);
	double a2 = pow((1 - t), 2) * 3 * t;
	double a3 = 3 * t*t*(1 - t);
	double a4 = t * t*t;
	p.x = a1 * p1.x + a2 * p2.x + a3 * p3.x + a4 * p4.x;
	p.y = a1 * p1.y + a2 * p2.y + a3 * p3.y + a4 * p4.y;
	return p;
}

void drawBezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3, int type) {
	glColor3f(0, 0, 0);
	points[0].setxy(x0, y0);
	points[1].setxy(x1, y1);
	points[2].setxy(x2, y2);
	points[3].setxy(x3, y3);
	/*setPoint(points[0]);
	setPoint(points[1]);
	setPoint(points[2]);
	setPoint(points[3]);*/
	glColor3f(1.0, 0.0, 0.0);

	Point p_current = points[0]; //设为起点

	chooseType(type);
	for (double t = 0.0; t <= 1.0; t += 0.01)
	{
		Point P = setBezier(points[0], points[1], points[2], points[3], t);
		glVertex2f(p_current.x, p_current.y);
		glVertex2f(P.x, P.y);
		//setline(p_current, P);
		p_current = P;
	}
	glEnd();

	glFlush();
	//glEnd();
}

void display(void)
{
	/*glClearColor(1,1,1,0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-100,100,-100,100);*/
	glClear(GL_COLOR_BUFFER_BIT);


	glNewList(BODY_1, GL_COMPILE);
	glColor3f(0, 0, 0);

	drawBezier(128, 475, 160, 645, 385, 695, 640, 686, 3);//polygon
	drawBezier(128, 475, 160, 645, 385, 695, 640, 686, 9);//polygon
	drawBezier(640, 686, 675, 685, 710, 688, 765, 740, 6);//polygon
	drawBezier(765, 740, 760, 680, 690, 590, 610, 560, 6);//尾部长线
	drawBezier(625, 590, 610, 560, 595, 540, 560, 520, 4);//尾部长线
	drawBezier(370, 435, 460, 450, 540, 485, 555, 570, 4);//中下长线
	drawBezier(370, 435, 460, 450, 540, 485, 555, 570, 8);//中下长线


	drawBezier(128, 475, 160, 645, 385, 695, 640, 686, 1);//上面长线
	drawBezier(640, 686, 675, 685, 710, 688, 765, 740, 1);//尾部长线
	drawBezier(765, 740, 760, 680, 690, 590, 610, 560, 1);//尾部长线
	drawBezier(625, 590, 610, 560, 595, 540, 560, 520, 1);//尾部长线

	drawBezier(370, 435, 460, 450, 540, 485, 565, 580, 1);//中下长线
	glEndList();

	glNewList(BODY_2, GL_COMPILE);
	glColor3f(0, 0, 0);

	drawBezier(128, 475, 135, 465, 150, 455, 195, 453, 4);//眼睛下红线
	drawBezier(278, 455, 310, 460, 350, 465, 373, 476, 4);//眼睛下红线
	drawBezier(370, 476, 408, 490, 410, 435, 362, 433, 11);//眼睛下红线


	drawBezier(128, 475, 135, 465, 150, 455, 195, 453, 2);//眼睛下红线


	drawBezier(278, 455, 310, 460, 350, 465, 373, 476, 2);//眼睛下红线

	drawBezier(370, 476, 408, 490, 410, 435, 362, 433, 2);//眼睛下红线

	drawBezier(128, 480, 95, 460, 180, 405, 280, 412, 1);//头白色下线

	glEndList();


	glNewList(BODY_3, GL_COMPILE);
	glColor3f(0, 0, 0);

	drawBezier(280, 412, 335, 395, 330, 395, 340, 428, 1);//头白色下线


	drawBezier(340, 428, 350, 430, 355, 433, 362, 433, 1);//头白色下线
	glEndList();


	glNewList(FIN_1, GL_COMPILE);
	glColor3f(0, 0, 0);
	//drawBezier(380,670,535,830,490,750,510,682,2);//上鱼鳍
	drawBezier(390, 670, 405, 700, 450, 740, 493, 755, 4);//上鱼鳍
	drawBezier(492, 755, 485, 734, 490, 700, 510, 682, 4);//上鱼鳍

	drawBezier(390, 670, 405, 700, 450, 740, 493, 755, 2);//上鱼鳍
	drawBezier(492, 755, 485, 734, 490, 700, 510, 682, 2);//上鱼鳍

	glEndList();


	glNewList(FIN_2, GL_COMPILE);
	glColor3f(0, 0, 0);

	drawBezier(590, 616, 610, 620, 680, 680, 640, 571, 4);//下鱼鳍
	drawBezier(635, 692, 620, 675, 590, 640, 590, 610, 7);//下鱼鳍
	drawBezier(635, 692, 620, 675, 590, 640, 590, 610, 4);//下鱼鳍

	drawBezier(515, 515, 515, 550, 505, 580, 480, 595, 2);//下鱼鳍
	drawBezier(480, 595, 530, 655, 560, 675, 635, 692, 2);//下鱼鳍
	drawBezier(635, 692, 620, 675, 590, 640, 590, 610, 2);//下鱼鳍
	drawBezier(590, 616, 610, 620, 680, 680, 640, 571, 2);//下鱼鳍



	glEndList();


	glNewList(WING_1, GL_COMPILE);
	drawBezier(425, 470, 480, 470, 405, 405, 648, 335, 10);//右翅膀
	drawBezier(485, 520, 520, 500, 630, 555, 810, 510, 10);//右翅膀
	drawBezier(642, 335, 745, 345, 865, 405, 805, 516, 10);//右翅膀

	drawBezier(425, 470, 480, 470, 405, 405, 648, 335, 1);//右翅膀
	drawBezier(485, 520, 520, 500, 630, 555, 810, 510, 1);//右翅膀
	drawBezier(642, 335, 745, 345, 865, 405, 805, 516, 1);//右翅膀
	glEndList();


	glNewList(WING_2, GL_COMPILE);
	drawBezier(215, 607, 170, 625, 120, 595, 46, 665, 19);//左翅膀
	drawBezier(290, 645, 303, 660, 304, 668, 270, 723, 19);//左翅膀
	drawBezier(47, 662, 80, 735, 218, 765, 273, 722, 19);//左翅膀

	drawBezier(215, 607, 170, 625, 120, 595, 46, 665, 1);//左翅膀
	drawBezier(290, 645, 303, 660, 304, 668, 270, 723, 1);//左翅膀
	drawBezier(47, 664, 80, 735, 218, 765, 272, 722, 1);//左翅膀

	glEndList();


	glNewList(GRAIN_1, GL_COMPILE);
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	for (int i = 0; i < 360; i += 1)
		glVertex2f(70 * cos(i*M_PI / 180), 35 * sin(i*M_PI / 180));
	glEnd();
	glEndList();

	glNewList(GRAIN_2, GL_COMPILE);
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	for (int i = 0; i < 360; i += 1)
		glVertex2f(55 * cos(i*M_PI / 180), 23 * sin(i*M_PI / 180));
	glEnd();
	glEndList();



	glNewList(EYE_1, GL_COMPILE);
	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.0, 0.0);

	for (int i = 65; i < 115; i += 1)
		glVertex2f(100 * cos(i*M_PI / 180), 300 * sin(i*M_PI / 180));


	glEnd();

	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0.27, 0.55);

	for (int i = 65; i < 115; i += 1)
		glVertex2f(110 * cos(i*M_PI / 180), 310 * sin(i*M_PI / 180));


	glEnd();
	glLineWidth(1);
	glEndList();


	glNewList(EYE_2, GL_COMPILE);
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	for (int i = 0; i < 360; i++)
		glVertex2f(30 * cos(i*M_PI / 180), 30 * sin(i*M_PI / 180));
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	for (int i = 0; i < 360; i++)
		glVertex2f(20 * cos(i*M_PI / 180), 20 * sin(i*M_PI / 180));
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	for (int i = 0; i < 360; i++)
		glVertex2f(10 * cos(i*M_PI / 180), 10 * sin(i*M_PI / 180));
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	for (int i = 0; i < 360; i++)
		glVertex2f(5 * cos(i*M_PI / 180), 5 * sin(i*M_PI / 180));
	glEnd();

	glEndList();



	glNewList(FRAME, GL_COMPILE);
	glLineWidth(1);
	glBegin(GL_LINES);

	glColor3f(0.0, 0.0, 0.0);
	for (int i = 0; i < 1080; i += 135) {
		glVertex2f(i, 0);
		glVertex2f(i, 1080);
		glVertex2f(0, i);
		glVertex2f(1080, i);
	}
	glEnd();
	glEndList();


	glNewList(HEAD, GL_COMPILE);
	glColor3f(0.93, 0.93, 0.93);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
		glVertex2f(32.5*cos(i*M_PI / 180), 75 * sin(i*M_PI / 180));
	glEnd();
	glEndList();

	glNewList(FINGER_1, GL_COMPILE);
	drawBezier(648, 338, 660, 355, 690, 361, 712, 353, 13);
	drawBezier(697, 300, 710, 300, 722, 302, 738, 320, 13);

	drawBezier(648, 338, 660, 355, 690, 361, 712, 353, 1);
	drawBezier(697, 300, 710, 300, 722, 302, 738, 320, 1);
	glColor3f(0.93, 0.93, 0.93);
	glBegin(GL_POLYGON);
	glVertex2f(648, 338);
	glVertex2f(697, 300);
	glVertex2f(712, 353);
	glVertex2f(738, 320);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(648, 338);
	glVertex2f(697, 300);
	glVertex2f(712, 353);
	glVertex2f(738, 320);
	glEnd();

	glColor3f(1, 0, 0);
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glVertex2f(677, 358);
	glVertex2f(632, 396);
	glVertex2f(637, 405);
	glVertex2f(608, 425);
	glEnd();

	glEndList();


	glNewList(FINGER_2, GL_COMPILE);
	drawBezier(730, 362, 738, 380, 758, 395, 780, 400, 14);
	drawBezier(730, 362, 745, 346, 780, 335, 801, 330, 14);
	drawBezier(800, 330, 823, 347, 863, 357, 780, 400, 14);

	drawBezier(730, 362, 738, 380, 758, 395, 780, 400, 1);
	drawBezier(730, 362, 745, 346, 780, 335, 800, 330, 1);
	drawBezier(800, 330, 823, 347, 863, 357, 780, 400, 1);

	glColor3f(1, 0, 0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glVertex2f(749, 386);
	glVertex2f(650, 430);
	glEnd();

	glEndList();

	glNewList(FINGER_3, GL_COMPILE);

	drawBezier(800, 411, 806, 443, 812, 450, 816, 463, 15);
	drawBezier(865, 400, 873, 405, 877, 420, 882, 444, 15);
	drawBezier(800, 411, 825, 406, 856, 398, 868, 400, 15);
	drawBezier(815, 463, 838, 457, 858, 456, 880, 442, 15);

	drawBezier(800, 411, 806, 443, 812, 450, 816, 463, 1);
	drawBezier(868, 400, 873, 405, 877, 420, 879, 442, 1);
	drawBezier(800, 411, 825, 406, 856, 398, 868, 400, 1);
	drawBezier(816, 463, 838, 457, 858, 456, 879, 442, 1);

	glColor3f(1, 0, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2f(807, 440);
	glVertex2f(679, 460);
	glVertex2f(745, 448);
	glVertex2f(701, 403);
	glEnd();

	glEndList();

	glNewList(FINGER_4, GL_COMPILE);
	drawBezier(820, 474, 818, 484, 817, 496, 808, 512, 16);
	drawBezier(810, 510, 825, 516, 845, 514, 862, 508, 16);
	drawBezier(820, 475, 830, 475, 850, 480, 870, 491, 16);
	drawBezier(862, 510, 866, 503, 868, 496, 870, 489, 16);

	drawBezier(820, 474, 818, 484, 817, 496, 808, 510, 1);
	drawBezier(810, 510, 825, 516, 845, 514, 862, 510, 1);
	drawBezier(820, 475, 830, 475, 850, 480, 870, 489, 1);
	drawBezier(862, 510, 866, 503, 868, 496, 870, 489, 1);

	glColor3f(1, 0, 0);
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glVertex2f(814, 490);
	glVertex2f(725, 490);
	glVertex2f(715, 480);
	glVertex2f(670, 480);
	glEnd();
	glEndList();

	glNewList(FINGER_5, GL_COMPILE);
	drawBezier(50, 666, 35, 670, 20, 683, 12, 690, 1);
	//drawBezier(17,694,50,765,188,790,245,765,1);//左翅膀

	glColor3f(0.93, 0.93, 0.93);
	glBegin(GL_POLYGON);
	glVertex2f(138, 732);
	glVertex2f(126, 765);
	glVertex2f(162, 772);
	glVertex2f(192, 742);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(245, 765);
	glVertex2f(260, 729);
	glVertex2f(215, 740);
	glVertex2f(210, 772);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(78, 706);
	glVertex2f(58, 738);
	glVertex2f(88, 753);
	glVertex2f(120, 727);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(12, 690);
	glVertex2f(27, 709);
	glVertex2f(70, 695);
	glVertex2f(50, 664);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(12, 690);
	glVertex2f(27, 709);
	glVertex2f(27, 709);
	glVertex2f(70, 695);

	glVertex2f(78, 706);
	glVertex2f(58, 738);
	glVertex2f(120, 727);
	glVertex2f(88, 753);
	glVertex2f(88, 753);
	glVertex2f(58, 738);

	glVertex2f(245, 765);
	glVertex2f(260, 725);
	glVertex2f(245, 765);
	glVertex2f(210, 773);
	glVertex2f(210, 773);
	glVertex2f(215, 738);

	glVertex2f(138, 730);
	glVertex2f(126, 765);
	glVertex2f(162, 772);
	glVertex2f(192, 742);
	glVertex2f(126, 765);
	glVertex2f(162, 772);
	glEnd();

	glColor3f(1, 0, 0);
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glVertex2f(139, 672);
	glVertex2f(122, 677);
	glVertex2f(105, 670);
	glVertex2f(65, 686);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);
	glVertex2f(154, 683);
	glVertex2f(107, 721);

	glVertex2f(200, 695);
	glVertex2f(175, 740);

	glVertex2f(130, 702);
	glVertex2f(184, 720);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glVertex2f(218, 697);
	glVertex2f(218, 714);
	glVertex2f(231, 718);
	glVertex2f(231, 736);

	glEnd();
	glEndList();



	glNewList(TRIP_1, GL_COMPILE);
	drawBezier(538, 518, 545, 540, 550, 545, 552, 562, 17);//中下长线
	drawBezier(559, 520, 571, 540, 575, 545, 580, 572, 17);//中下长线

	drawBezier(538, 520, 545, 540, 550, 545, 552, 562, 1);//中下长线
	drawBezier(559, 520, 571, 540, 575, 545, 580, 572, 1);//中下长线

	glColor3f(0.93, 0.93, 0.93);
	glBegin(GL_POLYGON);
	glVertex2f(551, 562);
	glVertex2f(580, 572);
	glVertex2f(552, 520);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(552, 562);
	glVertex2f(580, 572);
	glEnd();
	glEndList();

	glNewList(TRIP_2, GL_COMPILE);
	drawBezier(586, 540, 596, 557, 597, 570, 598, 576, 18);//中下长线
	drawBezier(586, 540, 611, 557, 612, 570, 614, 583, 18);//中下长线

	drawBezier(586, 540, 596, 557, 597, 570, 598, 576, 1);//中下长线
	drawBezier(586, 540, 611, 557, 612, 570, 614, 583, 1);//中下长线

	glColor3f(0.93, 0.93, 0.93);
	glBegin(GL_POLYGON);
	glVertex2f(597, 576);
	glVertex2f(614, 583);
	glVertex2f(595, 548);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(598, 576);
	glVertex2f(614, 583);
	glEnd();
	glEndList();

	glNewList(TAIL_1, GL_COMPILE);
	drawBezier(547, 685, 480, 740, 640, 795, 693, 778, 20);
	drawBezier(595, 710, 570, 730, 625, 770, 690, 767, 20);
	drawBezier(693, 779, 690, 773, 690, 772, 690, 767, 20);
	drawBezier(595, 710, 620, 740, 670, 770, 715, 775, 21);
	drawBezier(637, 682, 663, 723, 690, 745, 769, 762, 21);

	drawBezier(547, 685, 480, 740, 640, 795, 693, 778, 1);
	drawBezier(595, 710, 570, 730, 625, 770, 690, 767, 1);
	drawBezier(693, 778, 690, 773, 690, 772, 690, 767, 1);

	drawBezier(595, 710, 620, 740, 670, 770, 715, 775, 1);
	drawBezier(637, 682, 663, 723, 690, 745, 769, 762, 1);
	drawBezier(733, 770, 720, 765, 716, 759, 755, 769, 1);

	glColor3f(0, 0.27, 0.55);
	glBegin(GL_POLYGON);
	glVertex2f(650, 730);
	glVertex2f(714, 775);
	glVertex2f(769, 762);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(650, 730);
	glVertex2f(590, 710);
	glVertex2f(637, 682);
	glVertex2f(547, 685);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(570, 754);
	glVertex2f(547, 685);
	glVertex2f(595, 705);
	glEnd();


	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(715, 775);
	glVertex2f(769, 762);
	glEnd();

	drawBezier(733, 770, 720, 765, 716, 759, 755, 769, 22);
	glEndList();


	glNewList(TAIL_2, GL_COMPILE);
	drawBezier(700, 630, 757, 612, 837, 714, 910, 705, 24);
	drawBezier(790, 610, 820, 633, 900, 690, 980, 680, 23);
	drawBezier(675, 610, 685, 625, 785, 550, 815, 567, 24);
	drawBezier(780, 610, 815, 580, 955, 715, 1005, 675, 25);
	drawBezier(815, 567, 845, 570, 975, 666, 1070, 642, 26);



	glColor3f(0, 0.27, 0.55);
	glBegin(GL_POLYGON);
	glVertex2f(675, 610);
	glVertex2f(700, 630);
	glVertex2f(810, 600);
	glVertex2f(810, 570);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(910, 705);
	glVertex2f(1005, 675);
	glVertex2f(830, 677);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1070, 642);
	glVertex2f(1003, 677);
	glVertex2f(945, 652);
	glEnd();


	drawBezier(675, 610, 685, 625, 785, 550, 815, 567, 1);
	drawBezier(815, 567, 845, 570, 975, 666, 1070, 642, 1);

	drawBezier(700, 630, 757, 612, 837, 714, 910, 705, 1);
	drawBezier(790, 610, 820, 633, 900, 690, 980, 680, 1);
	drawBezier(780, 610, 815, 580, 955, 715, 1005, 675, 1);

	drawBezier(919, 700, 905, 695, 925, 690, 943, 693, 1);
	drawBezier(1013, 670, 970, 665, 1015, 655, 1041, 656, 1);



	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(1070, 642);
	glVertex2f(1005, 675);
	glVertex2f(910, 705);
	glVertex2f(980, 680);
	glEnd();

	drawBezier(921, 702, 905, 695, 925, 690, 948, 694, 22);
	drawBezier(1015, 672, 970, 665, 1015, 655, 1046, 656, 22);

	glEndList();

	glNewList(Kyogre, GL_COMPILE);
	drawBezier(280, 412, 335, 395, 330, 395, 342, 428, 12);//头白色下线
	drawBezier(340, 428, 350, 430, 355, 433, 364, 433, 12);//头白色下线
	drawBezier(128, 480, 95, 460, 180, 405, 284, 412, 12);//头白色下线
	glPushMatrix();
	glTranslatef(235, 472, 0);
	glCallList(EYE_2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(235, 180, 0);
	glCallList(EYE_1);
	glPopMatrix();

	glCallList(TAIL_1);


	glCallList(FIN_1);

	glCallList(BODY_1);
	glCallList(BODY_2);
	glCallList(BODY_3);


	glCallList(WING_1);
	glCallList(WING_2);

	glPushMatrix();
	glTranslatef(610, 460, 0);
	glCallList(GRAIN_1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(196, 670, 0);
	glRotated(8, 0, 0, 1);
	glCallList(GRAIN_2);
	glPopMatrix();

	glCallList(FIN_2);

	//头上第一个椭圆
	glPushMatrix();
	glTranslatef(293, 537, 0);
	glRotated(-60, 0, 0, 1);
	glCallList(HEAD);
	glPopMatrix();

	//头上第二个椭圆
	glPushMatrix();
	glTranslatef(395, 532, 0);
	glRotated(-60, 0, 0, 1);
	glScalef(0.4, 0.4, 1);
	glCallList(HEAD);
	glPopMatrix();


	glCallList(FINGER_1);
	glCallList(FINGER_2);
	glCallList(FINGER_3);
	glCallList(FINGER_4);

	glCallList(FINGER_5);
	glCallList(FINGER_6);
	glCallList(FINGER_7);
	glCallList(FINGER_8);

	glCallList(TRIP_1);
	glCallList(TRIP_2);

	glCallList(TAIL_2);

	//glCallList(FRAME);

	glEndList();

	//glCallList(Kyogre);
	glPushMatrix();
	glScaled(0.8, 0.8, 1);
	glTranslated(100, 450, 0);
	glCallList(Kyogre);
	glPopMatrix();

	glPushMatrix();
	glScaled(0.8, 0.8, 1);
	glTranslated(100, -250, 0);
	glCallList(Kyogre);
	glPopMatrix();

	glFlush();
}
/*void key(unsigned char key, int x, int y)
{
	if (key == ' ')
		exit(0);
}*/
/*int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(100, 100);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutCreateWindow("B0529002");
	init();
	glutDisplayFunc(display);
	//glutKeyboardFunc(key);
	glutMainLoop();
	return 0;
}*/
