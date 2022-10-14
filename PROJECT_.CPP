#include<stdio.h>
#include<dos.h>
#include<conio.h>
struct point{
	int x,y;
} point1 , point2;

void start(struct point p1,struct point p2);
int between(int a , int b , int c);

void main()
{
	clrscr();

	printf("hello world ! Good Morning Friends !");
	delay(1000);

	point1.x = 0;
	point1.y = 0;
	point2.x = 20;
	point2.y = 10;
	for(int i = 0 ; i < 50 ; i ++ ){
		clrscr();
		start(point1 , point2);
		point1.x++;
		point2.x++;
		delay(1000);
	}
	for(i = 0 ; i < 50 ; i ++ ){

		start(point1 , point2);
		point1.x--;
		point2.x--;
		delay(1000);
	}
}

void start(struct point p1 , struct point p2)
{
	int height = 20;
	int width = 70;

	for(int y = 0 ; y < height ; y ++ )
	{        for(int x =0 ; x < width; x ++)
		 {
			if(between(p1.x,x,p2.x) && between(p1.y,y,p2.y))
			{
			     printf("_");
			}
			else{
			     printf(" ");
			}
		}
		printf("\n");
	}



}

int between(int a , int b , int c){
	if(a<=b && b<=c)return 1;
	if (c<=b && b<=a) return 1;
	return 0;

}






