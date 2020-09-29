/*
Name : finance in C++
Author : Аїӡек Меѥҏ
Version : v1.0
License : N/A
*/

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void input(float *p, float *r, float *t, int *n)
{
  cout << "Principal: ";
  scanf("%f", p);
  cout << "Rate: ";
  scanf("%f", r);
  cout << "Length (in Years): ";
  scanf("%f", t);
  cout << "Times per year: ";
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
  cout << "Interest: " << calculate(principal, rate, year, times) << endl;
}

