#include <stdio.h>
int main(void)
{ 
  float B ,H ,Area;    
  printf("Enter B : ");
  scanf("%f", &B);     
  printf("Enter H : ");
  scanf("%f", &H);    
  Area = 0.5 *(B*H);     
  printf("Area is %f", Area); 
  return 0;
}