#include <stdio.h>
#include <math.h>
int main() {

  int a, b ,c;
  scanf("%d %d %d",&a ,&b ,&c);
  
  //discriminant
  float d = (b*b)- 4*a*c;
  
  if(d > 0){
    float r1 = (-b +  sqrt((int)pow(b,2) - 4*a*c ) )/ (2*a);
    float r2 = (-b -  sqrt((int)pow(b,2) - 4*a*c ) )/ (2*a);
    
    printf("Roots: %.2f, %.2f\nType: Real and Distinct", r1, r2);
  }
  else if(d == 0){
    float r1 = (-b +  sqrt((int)pow(b,2) - 4*a*c ) )/ (2*a);
    
    printf("Roots: %.2f, %.2f\nType: Real and Equal", r1, r1);
  }
  else{
    //complex roots :: d < 0
    float real = -b / (2*a) ;
    float imaginary = sqrt(-d) / (2*a) ;
    printf("Roots: %.2f + %.2fi, %.2f - %.2fi\nType: Complex", real, imaginary , real, imaginary);
  }
  
  
}
  
  