#include<stdio.h>
typedef struct complex
{
  float real;
  float imaginary;
}Complex;
Complex input()
{
  Complex a;
  printf("enter the real part : ");
  scanf("%f",&a.real);
  printf("enter the imaginary part : ");
  scanf("%f",&a.imaginary);
  return a;
}
Complex add(Complex a,Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(Complex result)
{
  printf("sum of two no. is %0.2f + %0.2fi",result.real,result.imaginary);
}
int main()
{
  Complex a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(sum);
  return 0;
}