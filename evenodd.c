#include<stdio.h>
int main()
{
int i;
scanf("%d", &i); 
printf("%s", i%2 == 0 ? "Even" : "Odd");
return 0;
}