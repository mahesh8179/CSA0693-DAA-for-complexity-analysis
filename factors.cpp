#include <stdio.h>
void factor(int n)
{
int i;
for(i=1; i<=n; i++)
{
if(n%i==0)
{
printf("%d ", i);
}
}
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
factor(n);
return 0;
}
