#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
int main()
{

    float x,y,dx,dy,step,x1=55.0,y1=60.0,x2=450.0,y2=460.0;
    printf("niraj shakya");
    int i=0,gd=DETECT,gm;
    initgraph (&gd,&gm,"c:\\turboc3\\bgi");
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if (dx >= dy)
        step=dx;
    else
        step=dy;
    dx=dx/step;
    dy=dy/step;
    x=x1,y=y1;
    while(i<=step)
    {
        putpixel(x,y,5);
        x=x+dx;
        y=y+dy;
        i=i+1;
        delay(100);
    }
    closegraph();
    return 0;
}
