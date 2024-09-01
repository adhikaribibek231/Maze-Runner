#include <stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

void start();
void win();
void lose();

void win(){
char ch;
cleardevice();
while(1){
    setcolor(13);
	settextstyle(1,HORIZ_DIR,6); //(font, direction, font_size)
	outtextxy(125,100,"MAZE Runner");
	setcolor(4); //4 is the int value for red
	outtextxy(100,200,"Congratulations!");
    settextstyle(1,HORIZ_DIR,3);
	outtextxy(100,300," You have escaped the maze.");
    setcolor(WHITE);
    outtextxy(100,350,"Press Space to Exit");
    setcolor(2); // 2 is int value for green
    outtextxy(100,400,"Press A to go play again");
ch=getch();
if(ch==' ')
    exit(0);
if(ch=='a' ||ch=='A')
    start(); //Goes back to start Menu
}
}
void lose(){
char ch;
cleardevice();
while(1){
    setcolor(13);
	settextstyle(1,HORIZ_DIR,6); //(font, direction, font_size)
	outtextxy(125,100,"MAZE Runner");
	setcolor(4);
	outtextxy(125,200,"YOU LOSE");
    settextstyle(1,HORIZ_DIR,3);
	outtextxy(100,300,"You failed to Escape the maze");

setcolor(WHITE);
outtextxy(100,350,"Press Space to Exit");
setcolor(2);
outtextxy(100,400,"Press A to Try again");
ch=getch();
if(ch==' ')
    exit(0);
if(ch=='a' ||ch=='A')
    start();
}
}

void countm(int *countmove, int a)
{
  char arr[50];

  setcolor(14);
  outtextxy(480,150,"Escape within ");
  switch(a)
    {
        case 1:
            outtextxy(500,170,"200 MOVES");
            break;
	case 2:
            outtextxy(500,170,"200 MOVES");
            break;
        case 3:
            outtextxy(500,170,"500 MOVES");
            break;
    }
  outtextxy(515,198,"MOVE");
  sprintf(arr,"%d",*countmove);
    setcolor(3);
  outtextxy(520,215,arr);
  *countmove=*countmove+1;
  switch(a)
    {
        case 1:
            if(*countmove>=200)
            lose();
            break;
        case 2:
            if(*countmove>=200)
            lose();
            break;
        case 3:
            if(*countmove>=500)
            lose();
            break;
    }
  setcolor(12);
  outtextxy(500,260,"Move with Arrows");
  outtextxy(500,270,"OR");
  outtextxy(500,280,"w -> Up");
  outtextxy(500,290,"s -> Down");
  outtextxy(500,300,"a -> Left");
  outtextxy(500,310,"d -> Right");
}

void ball(int j,int k,int l)   //ball
{
 circle(j,k,l);
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,14);
 floodfill(j,k,WHITE);
}
void caption()
{
  setcolor(12);
  settextstyle(0,HORIZ_DIR,0);
  outtextxy(10,40,"Escape from the Maze");
  outtextxy(10,55,"or Press 'SPACE' to EXIT");
  setcolor(WHITE);
}

void body1()
{
    setcolor(3);
    outtextxy(0,75," Level 1");
    // Horizontal lines
    line(0,100,450,100);
    line(0,400,500,400);
    line(450,370,500,370);
    line(50,150,200,150);
    line(300,200,350,200);
    line(50,270,100,270);

// vertical lines

    line(0,100,0,400);
    line(450,100,450,370);
    line(200,150,200,400);
    line(100,270,100,400);
    line(300,300,300,400);
    line(300,100,300,200);
    setcolor(14);
    circle(500,385,10);
    setcolor(WHITE);
}
void condition1(int *j,int *k){
    // four corners
if(*k==110){
	   if(*j<450 && *j>0)
	   *k+=5;
	   }
   if(*j==10){
	if(*k<400 && *k>100)
	    *j+=5;
   }
   if(*k==390){
	if(*j<500 &&* j>0)
	*k-=5;
     }
   if(*j==440){
	if(*k>100 && *k<380)
	*j-=5;
     }
    if(*k==380){
	if(*j<500&& *j>440)
	*k+=5;
   }
    // Horizontal Lines
    if(*k>=140 && *k<=160){
	if(*j<210 && *j>40 && *k<=150)
	    *k-=5;
	if(*j<210 && *j>40 && *k>=150)
	    *k+=5;
    }
    if(*k>=260 && *k<=280){
	if(*j<110 && *j>40 && *k<=270)
	*k-=5;
	if(*j<110 && *j>40 && *k>=270)
	*k+=5;
    }
    if(*k>=190 && *k<=210){
	if(*j<340 && *j>290 && *k<=200)
	*k-=5;
	if(*j<340 && *j>290 && *k>=200)
	*k+=5;
    }
    // Vertical Lines
    if(*j>=190 && *j<=210){
	if(*k<400 && *k>140 && *j<=200)
	*j-=5;
	if(*k<400 && *k>140 && *j>=200)
	*j+=5;
    }
    if(*j>=290 && *j<=310){
	if(*k<210 && *k>100 && *j<=300)
	*j-=5;
	if(*k<210 && *k>100 && *j>=300)
	*j+=5;
    }
    if(*j>=90 && *j<=110){
	if(*k<400 && *k>260 && *j<=100)
	*j-=5;
	if(*k<400 && *k>260 && *j>=100)
	*j+=5;
    }
    if(*j>=290 && *j<=310){
	if(*k<400 && *k>290 && *j<=300)
	*j-=5;
	if(*k<400 && *k>290 && *j>=300)
	*j+=5;
    }

}
void body2(){
    setcolor(3);
    outtextxy(0,75," Level 2");
    // Horizontal LInes
    line(0,100,450,100);
    line(0,400,500,400);
    line(450,370,500,370);
    line(50,170,150,170);
    line(200,170,450,170);
    line(150,210,400,210);
    line(50,300,150,300);
    line(200,350,400,350);
    // Vertical Lines
    line(0,100,0,400);
    line(450,100,450,370);
    line(50,170,50,300);
    line(150,170,150,250);
    line(100,210,100,300);
    line(200,250,200,300);
    line(300,250,300,300);
    line(400,210,400,350);
    line(150,300,150,400);
    setcolor(14);
    circle(500,385,10);
    setcolor(WHITE);
}
void condition2(int *j, int *k){
    if(*k==110){
	   if(*j<450 && *j>0)
	   *k+=5;
	   }
   if(*j==10){
	if(*k<400 && *k>100)
	    *j+=5;
	}
   if(*k==390){
	if(*j<500 &&* j>0)
	*k-=5;
	}
   if(*j==440){
	if(*k>100 && *k<380)
	*j-=5;
	}
    if(*k==380){
	if(*j<500&& *j>440)
	*k+=5;
	}
// .........................
    if(*k>=160 && *k<=180){
	if(*j<160 && *j>40 && *k<=170)
	    *k-=5;
	if(*j<160 && *j>40 && *k>=170)
	    *k+=5;
    }
    if(*k>=160 && *k<=180){
	if(*j<450 && *j>190 && *k<=170)
	    *k-=5;
	if(*j<450 && *j>190 && *k>=170)
	    *k+=5;
    }
    if(*k>=200 && *k<=220){
	if(*j<410 && *j>150 && *k<=210)
	    *k-=5;
	if(*j<410 && *j>150 && *k>=210)
	    *k+=5;
    }
    if(*k>=290 && *k<=310){
	if(*j<210 && *j>40 && *k<=300)
	    *k-=5;
	if(*j<210 && *j>40 && *k>=300)
	    *k+=5;
    }
    if(*k>=340 && *k<=360){
	if(*j<410 && *j>190 && *k<=350)
	    *k-=5;
	if(*j<410 && *j>190 && *k>=350)
	    *k+=5;
    }
    // ................................
    if(*j>=40 && *j<=60){
	if(*k<310 && *k>160 && *j<=50)
	*j-=5;
	if(*k<310 && *k>160 && *j>=50)
	*j+=5;
    }
    if(*j>=90 && *j<=110){
	if(*k<310 && *k>200 && *j<=100)
	*j-=5;
	if(*k<310 && *k>200 && *j>=100)
	*j+=5;
    }
    if(*j>=140 && *j<=160){
	if(*k<260 && *k>160 && *j<=200)
	*j-=5;
	if(*k<260 && *k>160 && *j>=200)
	*j+=5;
    }
    if(*j>=190 && *j<=210){
	if(*k<310 && *k>240 && *j<=200)
	*j-=5;
	if(*k<310 && *k>240 && *j>=200)
	*j+=5;
    }
    if(*j>=290 && *j<=310){
	if(*k<310 && *k>240 && *j<=300)
	*j-=5;
	if(*k<310 && *k>240 && *j>=300)
	*j+=5;
    }
    if(*j>=390 && *j<=410){
	if(*k<360 && *k>200 && *j<=400)
	*j-=5;
	if(*k<360 && *k>200 && *j>=400)
	*j+=5;
    }
    if(*j>=140 && *j<=160){
	if(*k<400 && *k>300 && *j<=150)
	*j-=5;
	if(*k<400 && *k>300 && *j>=150)
	*j+=5;
    }
}


void body3() //figure
{ setcolor(3);
  outtextxy(0,75," Level 3");
line(0,100,450,100);  //horizontal line
  line(50,130,400,130);
  line(100,160,450,160);
  line(150,190,300,190);
  line(100,220,250,220);
  line(50,250,200,250);
  line(0,400,500,400);
  line(450,370,500,370);
  line(0,100,0,400); //vertical line
  line(50,130,50,370);
  line(100,160,100,220);
  line(100,280,100,400);
  line(150,250,150,370);
  line(200,280,200,400);
  line(250,220,250,370);
  line(300,190,300,400);
  line(350,160,350,370);
  line(400,190,400,400);
  line(450,100,450,370);
  setcolor(14);
  circle(500,385,10);
  setcolor(WHITE);
}
void condition3(int *j,int *k)
{  if(*k==110){
	   if(*j<450 && *j>0)
	   *k=*k+5;
	   }
   if(*j==10){
    if(*k<400 && *k>100)
	*j+=5;
   }
   if(*k==390){
     if(*j<500 &&* j>0)
     *k-=5;
     }
   if(*j==440){
     if(*k>100 && *k<380)
     *j-=5;
     }
   if(*k==380){
   if(*j<500&& *j>440)
   *k+=5;
   }
   if(*k>=120 && *k<=140 ){
   if(*j<410 && *j>40 && *k<=130)
   *k-=5;
   if(*j<410 && *j>40 && *k>=130)
   *k+=5;
   }
  if(*k>=150 && *k<=170 && *j>=90 &&* j<=450){
  if(*k<=160) *k-=10;
  *k+=5;
  }
  if(*k>=180&&*k<=200&&*j>=140&&*j<=310)
  { if(*k>=190 ) *k+=10;
    *k-=5;}
  if(*k>=210&&*k<=230&&*j>=90&&*j<=260)
  {if(*k>=220) *k+=10;
   *k-=5;
  }
  if(*k<=260 && *k>=240 && *j<=210&& *j>40){
  if(*k>=250) *k+=10;
  *k-=5;
  }
  if(*k<=370&&*k>=130&&*j<=60&&*j>=40){
  if(*j<=50) *j-=10;
  *j+=5;
  }
  if(*k<=220&&*k>=160&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=250&&*j<=160&&*j>=140){
  if(*j<=150) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=210&&*j>=190){
  if(*j<=200) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=220&&*j<=260&&*j>=240){
  if(*j<=250) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=310&&*j>=290){
  if(*j<=300) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=160&&*j<=360&&*j>=340){
  if(*j<=350) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=410&&*j>=390){
  if(*j<=400) *j-=10;
  *j+=5;
  }
}
void start()
{
    char c,ch,ip;
    int i,j=20,k=250,l=10,m=10,countmove=0;
    cleardevice();
    while(1){
	setcolor(13);
	settextstyle(1,HORIZ_DIR,6); //(font, direction, font_size)
	outtextxy(125,100,"MAZE Runner");
	settextstyle(0,HORIZ_DIR,0);
	setcolor(9);
	outtextxy(0,200,"Press 'z' to play level 1 MAZE");
	outtextxy(0,300,"Press 'x' to play level 2 MAZE");
	outtextxy(0,400,"Press 'c' to play level 3 MAZE");
	ch=getch();
	ip=ch;
	if(ch=='z'||ch=='x'||ch=='c')
	break;
	getch();
    }

    // level 1
    if(ip=='z')
    {
	cleardevice();
	body1();
	ball(j,k,l);
	caption();
	countm(&countmove,1);
	for(i=0;i<m++;i++)
	{
	condition1(&j,&k);
	countm(&countmove,1);
	c=getch();
	cleardevice();

	if(c==75||c=='a')
	    j-=5;
	if(c==80||c=='s')
	    k+=5;
	if(c==77||c=='d')
	    j+=5;
	if(c==72||c=='w')
	    k-=5;
	if(c==' ')
	    exit(0);

	caption();
	body1();
	ball(j,k,l);
	if(j>=500) //because ending circle position
    win();
	}
    }
// Level 3
    if(ip=='c')
    {
	cleardevice();
	body3();
	ball(j,k,l);
	caption();
	countm(&countmove,3);
	for(i=0;i<m++;i++)
	{
	condition3(&j,&k);
	countm(&countmove,3);
	c=getch();
	cleardevice();

	if(c==75||c=='a')
	    j-=5;
	if(c==80||c=='s')
	    k+=5;
	if(c==77||c=='d')
	    j+=5;
	if(c==72||c=='w')
	    k-=5;
	if(c==' ')
	    exit(0);

	caption();
	body3();
	ball(j,k,l);
        if(j>=500) //because ending circle position
        win();
    }
    }
    // level 2
    if(ip=='x')
    {
	cleardevice();
	body2();
	ball(j,k,l);
	caption();
    countm(&countmove, 2);
    for(i=0;i<m++;i++)
	{
	condition2(&j,&k);
	countm(&countmove,2);
	c=getch();
	cleardevice();

	if(c==75||c=='a')
	    j-=5;
	if(c==80||c=='s')
	    k+=5;
	if(c==77||c=='d')
	    j+=5;
	if(c==72||c=='w')
	    k-=5;
	if(c==' ')
	    exit(0);

	caption();
	body2();
	ball(j,k,l);
        if(j>=500) //because ending circle position
        win();
    }
    }
    }
void main()
{
  int d=DETECT,g;
  initgraph(&d,&g,"C:\\TURBOC3\\BGI"); //initgraph() initializes the graphics system by loading a graphics driver from disk
start(); // Initialization
}