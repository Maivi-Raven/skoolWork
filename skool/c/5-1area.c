#include <stdio.h>
#include <math.h>

float area(float r)
{
  return  pow(r, 2) * 3.14159;
}

int main() {
  float r;
  printf("input radius: ");
  scanf("%f", &r);
  printf("%f\n", area(r));
  return 0;
} 