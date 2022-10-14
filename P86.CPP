#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int n = 4;
	char a[4][10];
	for(int i = 0 ;i < n ; i ++){
		printf("Enter string :");scanf("%s" , a[i]);
	}
	char *b = &a[0][0];
	for(i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n-i-1 ; j++){
			for(int k = 0 ; k < 10 ; k++){
				if( *(b+j*10+k) > *(b+(j+1)*10+k)){
					//swapping should happen
					// swapping using for loop...
					for(int z = 0 ;z<10;z++){
						char t = *(b+j*10+z);
						*(b+j*10+z) = *(b+(j+1)*10+z);
						*(b+(j+1)*10+z) = t;
					}
					break;
				}
				else if( *(b+j*10+k) < *(b+(j+1)*10+k))
				{
					//swapped correctly...

					break;
				}
			}
		}
	}
	printf("Sorted array \n");

	for(i= 0;i<n;i++){
		printf("%s  " , b+i*10);
	}
	getch();
}