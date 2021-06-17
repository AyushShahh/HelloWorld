#include <stdio.h>
#include <conio.h>

int main()
{
	char a[100],b[100];
	
	printf("Name with surname: ");
	scanf("%s%s",&a,&b);
	
	printf("\n Hello! %s %s",a,b);
	
	getch();
	return 0;
}
