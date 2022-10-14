#include<stdio.h>
void main()
{
 int l,r;
 scanf("%d %d",&l,&r);

 for(int i=l ; i<= r ; i++){
	int prime = 1;
	for(int j = 2 ; j< i; j++){
		if (i%j == 0){ 	// j is factor of i , i has another
				// factor , so i cannot be prime
		     prime = 0;
		}
	}
	if(prime == 1)
		printf("The number %d is prime\n",i);

 }
}

