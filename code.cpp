#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void car(int x);
int main()
{
int gd=DETECT,gn;
int x;
char ch;
initgraph(&gd,&gn,"C:\\TURBOC3\\BGI");
x=180;
ch='r';
while(ch!='e')
{
	cleardevice();
	rectangle(50,150,100,50);
	rectangle(90,62,60,140);
	circle(75,75,10);
	circle(75,100,10);
	circle(75,125,10);
	car(x);
	switch(ch)
	{
	case 'r':setfillstyle(SOLID_FILL,RED);
		 rectangle(90,62,60,140);
		 circle(75,75,10);
		 floodfill(75,75,WHITE);
		 circle(75,100,10);
		 circle(75,125,10);
		 break;
	case 'g':setfillstyle(SOLID_FILL,GREEN);
		 rectangle(90,62,60,140);
		 circle(75,75,10);
		 circle(75,125,10);
		 floodfill(75,125,WHITE);
		 circle(75,100,10);
		 while(!kbhit())
		 {
			x-=2;
			if(x<-100)
				x=180;
			car(x);
			circle(75,75,10);
			rectangle(90,62,60,140);
			circle(75,125,10);
			floodfill(75,125,WHITE);
			circle(75,100,10);
			delay(50);
		 }
		 break;
	case 'y':setfillstyle(SOLID_FILL,YELLOW);
		 rectangle(90,62,60,140);
		 circle(75,75,10);
		 circle(75,100,10);
		 circle(75,125,10);
		 floodfill(75,100,WHITE);
		 delay(1000);
		 setfillstyle(SOLID_FILL,RED);
		 floodfill(75,75,WHITE);
		 setfillstyle(SOLID_FILL,BLACK);
		 floodfill(75,100,WHITE);
		 break;
	default: printf("Thank you\nPress e to Exit");
		 break;
	}
	delay(50);
	ch=getch();
}
getch();
return 0;
}
void car(int i)
{
	cleardevice();
	line(0,350,getmaxx(),350);
	line(100+i,260,100+i,320);
	line(450+i,240,450+i,320);
	line(100+i,260,180+i,240);
	line(180+i,240,400+i,240);
	line(450+i,240,400+i,240);
	line(180+i,240,210+i,170);
	line(400+i,240,400+i,170);
	line(310+i,220,310+i,210);
	line(330+i,220,330+i,210);
	line(210+i,170,400+i,170);
	line(235+i,170,235+i,240);
	line(320+i,170,320+i,240);
	circle(180+i,320,30);
	line(130+i,320,150+i,280);
	line(230+i,320,210+i,280);
	line(150+i,280,210+i,280);
	circle(380+i,320,30);
	line(330+i,320,350+i,280);
	line(430+i,320,410+i,280);
	line(350+i,280,410+i,280);
	line(100+i,320,130+i,320);
	line(230+i,320,330+i,320);
	line(450+i,320,430+i,320);
	circle(380+i,320,5);
	circle(180+i,320,5);
}
