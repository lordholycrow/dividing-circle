#include <graphics.h> 
#include <stdio.h> 
#include <conio.h>
#include <iostream>
using namespace std;

int main() 
{ 

	float x, y1, y2, vx, vy, g,nx;

    x = 100;  
    y1 = 200;  
	y2 = 200;  
    vx = 5;   
    vy = 6;    
    g = 0.1;  
    int  gd = DETECT, gm; 
	initgraph(&gd, &gm, "");     
   	

    while (1) 
    {
        cleardevice();      
        x=x+vx;
      
        if(x<=300)
        {
        	setfillstyle(SOLID_FILL,RED);
        	  circle(x, y1, 10);   // Draw a ball with a diameter of 10
        	  floodfill(x+2,y1+2,15);
		}
		else if(x>300)
		{
			y1=y1+vy;
			y2=y2-vy;
			setfillstyle(SOLID_FILL,GREEN);
			circle(x, y1, 10);
			 floodfill(x+2,y1+2,15);
			setfillstyle(SOLID_FILL,BLUE);
			circle(x, y2, 10);
			 floodfill(x+2,y2+2,15);
			 nx=nx+vx;
		}
		if(x>400)
		{
			
				setfillstyle(SOLID_FILL,RED);
        	  circle(x-nx, 200, 10);   // Draw a ball with a diameter of 10
        	  floodfill(x-nx+2,202,15);
        	  break;
		}
		
        Sleep(5);
        
    }
    _getch();
    closegraph();
    return 0;
}
