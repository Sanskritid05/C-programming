#include <stdio.h>

int main(){
  int size , flag = 0;
  scanf("%d", &size);
  int a[size] ;
  for(int i = 0 ; i < size ; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0 ; i < size - 1 ; i++){
   if(a[i] > a[i+1]){
    flag++ ;
    break;
   }
  }
  (flag) ? printf("Not Sorted") : printf("Sorted");

}