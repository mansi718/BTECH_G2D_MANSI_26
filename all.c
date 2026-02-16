#include <stdio.h>
int main() 
{
float a, b, c, d, e, total, per;
printf("Enter marks of 5 subjects: ");
scanf("%f %f %f %f %f",a,b,c,d,e);
total = a + b + c + d + e;
per = (total * 100) / 500.0;
printf(total, per);

return 0;
}
