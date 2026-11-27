 #include <stdio.h>

int main() 
{
  printf("This is a program that solves percentages of a number");

  printf("Enter the number: ");
  float number;
  scanf("%f", &number);
  printf("Enter the percentage: ");
  float percentage;
  scanf("%f", &percentage);
  if (percentage < 0 || percentage > 100) 
  {
    printf("Error: Percentage must be between 0 and 100.");
    return 1;
  }
  float result = (percentage / 100) * number;
  printf("The result is: %.2f", result);

  return 0;
}