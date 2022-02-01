#include <stdio.h>
typedef struct complex
{
  float real;
  float imaginary;
}Complex;

int get_n()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex a;
  printf("Enter the real no.\n");
  scanf("%f",&a.real);
  printf("Enter the imaginary no.\n");
  scanf("%f",&a.imaginary);
  return a;
}
void input_n_complex(int n, Complex c[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    c[i]= input_complex();
  }
}
Complex add_complex(Complex a,Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
Complex add_n_input(int n,Complex c[n])
{
  Complex res;
  res.real=0;
  res.imaginary=0;
  for(int i=0;i<n;i++)
  {
  res=add_complex(res,c[i]);
  }
  return res;
}
void output(Complex sum,int n,Complex c[n])
{
  if(n==1)
  printf("%0.2f + %0.2fi is %0.2f + %0.2fi",c[0].real,c[0].imaginary,sum.real,sum.imaginary);
  else
  for(int i=0;i<n-1;i++)
  {
    printf("%0.2f+%0.2fi +",c[i].real,c[i].imaginary);
  }  
  printf("%0.2f + %0.2fi is %0.2f + %0.2fi",c[n-1].real,c[n-1].imaginary,sum.real,sum.imaginary);
}
int main()
{
  int n;
  Complex c[n],sum;
  n=get_n();
  input_n_complex(n,c);
  sum=add_n_input(n,c);
  output(sum,n,c);
  return 0;
  }