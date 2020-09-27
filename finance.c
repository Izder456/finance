
/*
Name : finance in C
Author : Аїӡек Меѥҏ
Version : v1.0
License : N/A
*/

#include <stdio.h>
#include <math.h>

void input(float *p, float *r, float *t, int *n)
{
  printf("Principal: ");
  scanf("%f", p);
  printf("Rate: ");
  scanf("%f", r);
  printf("Length (in Years): ");
  scanf("%f", t);
  printf("Times per year: ");
  scanf("%d", n);
}

float calculate(float *p, float *r, float *t, int *n)
{
  return pow((*p) * (1 + (*r / *n)),((*n) * (*t)));
}

int main()
{
  float iPrincipal, iRate, iYear;
  int iTimes;
  float *principal = &iPrincipal;
  float *rate = &iRate;
  float *year = &iYear;
  int *times = &iTimes;
  input(principal, rate, year, times);
  printf("Interest: %.2f\n", calculate(principal, rate, year, times));
}

