#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void paths(){
	// paths
	rectangle(0,170,220,0);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(100,100,WHITE);
	rectangle(420,0,getmaxx(),170);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(430,100,WHITE);
	rectangle(0,320,220,getmaxy());
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(210,330,WHITE);
	rectangle(420,320,getmaxx(),getmaxy());
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(450,350,WHITE);
	// signal 1
	rectangle(205,335,185,410);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(200,350,WHITE);
	circle(195,350,8);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(195,350,WHITE);
	circle(195,372,8);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(195,372,WHITE);
	circle(195,394,8);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(195,394,WHITE);
	// signal 2
	rectangle(435,335,510,355);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(500,340,WHITE);
	circle(450,345,8);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(450,345,WHITE);
	circle(472,345,8);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(472,345,WHITE);
	circle(492,345,8);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(492,345,WHITE);
}
void car1(int i){
	rectangle(530 - i,300,630 - i,270);
	rectangle(548 - i,270,570 - i,240);
	circle(550 - i,300,10);
	circle(610 - i,300,10);
}
void car2(int i){
	rectangle(400,100 + i,370,20 + i);
	rectangle(370,88 + i,350,70 + i);
	circle(400 + i,80,10);
	circle(400 + i,40,10);
}
void signal1(int i){
	if(i==1){
		setfillstyle(SOLID_FILL,RED);
		floodfill(195,350,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(195,350,WHITE);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(195,372,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(195,372,WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(195,394,WHITE);
	}
	else{
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(195,394,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(195,394,WHITE);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(195,372,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(195,372,WHITE);
		setfillstyle(SOLID_FILL,RED);
		floodfill(195,350,WHITE);
	}
}
void signal2(int i){
	if(i==1){
		setfillstyle(SOLID_FILL,RED);
		floodfill(450,345,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(450,345,WHITE);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(472,345,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(472,345,WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(494,345,WHITE);
	}
	else{
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(494,345,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(494,345,WHITE);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(472,345,WHITE);
		delay(500);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(472,345,WHITE);
		setfillstyle(SOLID_FILL,RED);
		floodfill(450,345,WHITE);
	}
}
void main(){
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	paths();
	car1(0);
	car2(0);
	signal1(1);
	signal2(1);
	getch();
	closegraph();
}
