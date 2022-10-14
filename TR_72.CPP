#include<stdio.h>

struct sample{
	char a[4][5];

};

void main()
{
struct sample s;
scanf("%s",s.a);
printf("%s",s.a);
scanf("%s",s.a[0]);
printf("%s",s.a);
scanf("%c",&s.a[0][0]);
printf("%s",s.a);


}