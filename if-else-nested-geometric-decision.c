#include <stdio.h>
int main(){
    int side;
    scanf("%d", &side);
    if(side == 3){
        int a, b, c, ang1, ang2, ang3;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &ang1, &ang2, &ang3);
        if((a+b)>c && ((ang1+ang2+ang3) == 180)){
            if((ang1 == 60) && (ang2 == 60) && (ang3 == 60) && (a = b = c) ){
                printf("Equilateral Triangle");
                return 0;
            }
            else if ((ang1 == ang2) || (ang2 == ang3) || (ang3 == ang1)){
                printf("Isosceles Triangle");
                return 0;
            }
            else if(a!=b && b!=c && a!=c){
                printf("Scalene Triangle");
                return 0;
            }
            else {
                printf("Invalid Figure");
            }
        }
    }
    if(side == 4){
        int A, B, C, D, ANG1, ANG2, ANG3, ANG4 ;
        scanf("%d %d %d %d %d %d %d %d",&A, &B, &C, &D, &ANG1, &ANG2, &ANG3, &ANG4);
        if((ANG1 + ANG2 + ANG3 + ANG4) == 360){
            if(A == B && B == C && C == D && D == A && ANG1 == 90 && ANG2 == 90 && ANG3 == 90 && ANG4 == 90){
                printf("Square"); 
                return 0;
            }
            else if(((A==C && B==D) || (A==B && C==D) || (A==D && B==C)) && (ANG1 == 90 && ANG2 == 90 && ANG3 == 90 &&               ANG4 == 90 )){
                printf("Rectangle");
                return 0;
            }
            else if(A == B && B == C && C == D && D == A && ANG1 != 90 && ANG2 != 90 && ANG3 != 90 && ANG4 != 90){
                printf("Rhombus"); 
                return 0;
            }
            else if(((A==C && B==D) || (A==B && C==D) || (A==D && B==C)) && ((ANG1==ANG3 && ANG2==ANG4) || (ANG1==ANG2 &&             ANG3==ANG4) || (ANG1==ANG4 && ANG2==ANG3))){
                printf("Parallelogram");
                return 0;
            }
            else{
                printf("Invalid Figure");
            } 
        }
        else{
            printf("Invalid Figure");
        }
    }
   else{
            printf("Invalid Figure");
        } 
}
