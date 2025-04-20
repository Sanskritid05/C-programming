#include <stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num % 2 == 1){
    for(int i = 1 ; i <= num ; i++){
      //I
      for(int j = 1 ; j <= num ; j++){
        if( i == 1 || i == num || j == num/2 +1){ //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      
      //N
      for(int j = 1 ; j <= num ; j++){
        if( j == 1 || j == num || j == i){ //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      //N
      for(int j = 1 ; j <= num ; j++){
        if( j == 1 || j == num || j == i){ //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      //O
      for(int j = 1 ; j <= num ; j++){
        if (( (i == 1 || i == num) && (j > 1 && j < num)) || ( (j == 1 || j == num) && (i > 1 && i < num)) ){  //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      //V
      for (int j = 1; j <= 2 * num - 1; j++) {
            if (j == i || j == 2 * num - i  ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
      printf("   ");
      //A
      for(int j = 1 ; j <= num ; j++){
        if((i == 1 && j > 1 && j < num) || (j == 1 && i > 1 ) || (j == num && i > 1) || (i == num/2 +1)){ //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      //T
      for(int j = 1 ; j <= num ; j++){
        if(i == 1 || j == num/2 +1){ //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      //I
      for(int j = 1 ; j <= num ; j++){
        if(i == 1 ||i == num|| j == num/2 +1){ //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      //O
      for(int j = 1 ; j <= num ; j++){
        if (( (i == 1 || i == num) && (j > 1 && j < num)) || ( (j == 1 || j == num) && (i > 1 && i < num)) ){  //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      //N
      for(int j = 1 ; j <= num ; j++){
        if( j == 1 || j == num || j == i){ //I
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      printf("  ");
      
      
      printf("\n");
      
    }
  }
}
