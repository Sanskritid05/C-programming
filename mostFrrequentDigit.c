#include <stdio.h>

int find_most_frequent_digit(int n) {
    int digit_freq , max_freq = 0 , most_frequent_number = -1 , temp;
  
    while(n != 0){
      int current_digit = n % 10 ;
      digit_freq = 0 ;
      temp = n/10 ; 
      
      while(temp != 0){
        if(temp % 10 == current_digit){
          digit_freq++;
        }
        temp = temp/10 ;
      }
      
      if(digit_freq > max_freq || (digit_freq == max_freq && current_digit > most_frequent_number)){
        max_freq = digit_freq ;
        most_frequent_number = current_digit ;
      }
      n = n/10 ;
    }
  return most_frequent_number ;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}