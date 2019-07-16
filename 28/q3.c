#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct
{
  double real;
  double imagine;
} Complex;

void product(Complex, Complex);
void add(Complex, Complex);

int main(void)
{
  int i;
  Complex arr[2];

  for(i=0; i<2; i++)
  {
    printf("Complex%d? ", i+1);
    scanf("%lf %lf", &arr[i].real, &arr[i].imagine);
  }

  product(arr[0], arr[1]);
  add(arr[0], arr[1]);
  return 0;
}

void product(Complex num1, Complex num2)
{
    Complex result;

    result.real = num1.real * num2.real - num1.imagine * num2.imagine;
    result.imagine = num1.imagine * num2.real + num1.real * num2.imagine;

    printf("product result: %f %fi\n", result.real, result.imagine);
    return;
}

void add(Complex num1, Complex num2)
{
  printf("add result: %f %fi\n", num1.real+num2.real, num1.imagine+num2.imagine);
}
