#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
VOID drawline(int x1,int y1,int x2,int y2)
{
    int dx,dy,p,x,y;
    dx=x2-x1;
    dy=y2-y1;
    x=x1,y=y1;
    p=2*dy-dx;
    while (x<x2)
    {
        if(p>=0)
        {
            putpixel (x,y,5);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p=p+p*dy;
        }
    }
    x=x+1;
    delay(100);
}
int main()
{

    int gd=DETECT,gm,x1,y1,x2,y2;
    x1=55,y1=60,x2=355,y2=360;
    drawline(x1,y1,x2,y2);
    closegraph();
    return 0;
}
