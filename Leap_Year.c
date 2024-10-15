#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the year to check for leap year");
	scanf("%d",&a);
	if (a%4==0) {
		if (a%100==0) {
			printf("its not a leap year");
			
		}
		else {
			printf("its a leap year");
		}
	}
}