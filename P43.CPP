#include<stdio.h>
void main()
{
	char a[100];
	int ans = 0;
	scanf("%s",a);
	for(int i=0;i<100;i++){
		if(a[i] == '\0')break;
		ans++;
	}
	printf("Length of string %d",ans);
}