#include <stdio.h>

int main(){
  int size ;
  scanf("%d", &size) ;
  
  int a[size] ;
  for(int i = 0 ; i < size ; i++){
    scanf("%d", &a[i]) ;
  }
  int key , count = 0;
  scanf("%d", &key) ;
  for(int i = 0 ; i < size ; i++){
    if(key == a[i])
      count++ ;
  }
  printf("%d", count) ;
  
}