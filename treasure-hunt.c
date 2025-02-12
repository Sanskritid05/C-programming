#include <stdio.h>
//For Right Path (Vault):
//If the puzzle is correct: "Player solved the puzzle."
//If the puzzle is incorrect: "Foolish player, Game Over!"

int main() {

    int enter;          //1 or 2 // 3;
    scanf("%d",&enter);
    if(enter==1){                                         //left_path
        printf("Player chooses the Left path.\n");
        int swamp;
        scanf("%d",&swamp);
        if(swamp==2){                                     //left_swamp==2
            printf("Player found a bridge.\n");
            int bridge;
            scanf("%d",&bridge);
            if(bridge==1){
                printf("Player crosses the bridge safely.\n");
                int final_room;
                scanf("%d",&final_room);                //left_final_room
                if(final_room==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(final_room==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                else{
                    if(final_room==3){
                        printf("Congratulations!! You won the treasure.\n");
                    }
                }
            }
            else{
                if(bridge==2){
                    printf("Poor luck, Game Over!\n");
                }
            }
        }
        else if(swamp==1){                                     //left_swamp==1_loose
            printf("Poor choice, Game Over!\n");
        }
    }
    else if(enter==2){
        printf("Player chooses the Middle path.\n");  
        int maze;
        scanf("%d",&maze);
        if(maze==582){
            printf("Player solved the puzzle.\n");
            int final_room;
            scanf("%d",&final_room);                //left_final_room
            if(final_room==1){
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if(final_room==2){
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else{
                if(final_room==3){
                    printf("Congratulations!! You won the treasure.\n");
                }
            }
        }
        else{
            printf("Foolish player, Game Over!\n");
        }
    }
    else{
         if(enter==3){
            printf("Player chooses the Right path.\n");  
            int vault;
            scanf("%d",&vault);
            if(vault==30){
                printf("Player solved the puzzle.\n");
                int final_room;
                scanf("%d",&final_room);                //left_final_room
                if(final_room==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(final_room==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                else{
                    if(final_room==3){
                        printf("Congratulations!! You won the treasure.\n");
                    }
                }
            }
            else{
            printf("Foolish player, Game Over!\n");
            }
         }
     }
    return 0;
}