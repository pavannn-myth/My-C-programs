#include<stdio.h>
void main()
{
float area,volume;
int radius;
clrscr();
printf("enter radius\n");
scanf("%d",&radius);
area=4*pi*(radius*radius);
printf("area of sphere=%f\n",area);
volume=(4.0/3.0)*pi*radius*radius*radius);
printf("volume of sphere=%f\n",volume);
getch();
}