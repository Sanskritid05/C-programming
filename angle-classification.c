#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Acute Angle: An angle less than 90 degrees.
//Right Angle: An angle exactly equal to 90 degrees.
//Obtuse Angle: An angle between 90 degrees and 180 degrees.
//Straight Angle: An angle exactly equal to 180 degrees.
//Reflex Angle: An angle greater than 180 degrees but less than 360 degrees.
//Full Rotation: An angle exactly equal to 360 degrees.
int main() {
    int angle;
    scanf("%d",&angle);
    if(angle>=0 && angle<90){
        printf("Acute Angle");
    }
    else if(angle==90){
        printf("Right Angle");
    }
    else if(angle>90 && angle<180){
        printf("Obtuse Angle");
    }
    else if(angle==180){
        printf("Straight Angle");
    }
    else if(angle>180 && angle<360){
        printf("Reflex Angle");
    }
    else if(angle>360){
        angle= angle-360;
        if(angle<90){
            printf("Acute Angle");
        }
        else if(angle>=0 && angle==90){
            printf("Right Angle");
        }
        else if(angle>90 && angle<180){
            printf("Obtuse Angle");
        }
        else if(angle==180){
            printf("Straight Angle");
        }
        else if(angle>180 && angle<360){
            printf("Reflex Angle");
        }
        else{
            printf("Full Rotation");
        }    
    }
    else if(angle==360){
        printf("Full Rotation");
    }
    else{
        return 0;
    }
    
    
    return 0;
}
