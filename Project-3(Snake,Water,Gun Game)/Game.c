#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int snackWaterGun(char you, char comp)
{
    // return 1 if you win ,-1 if you lose and 0 if draw
    // condition for draw
    //case covered
    //ss
    //gg
    //ww
    if (you == comp)
    {
        return 0;
    }
    // non draw conditons
    // casees coverd
    //sg
    //gs
    //sw
    //ws
    //gw
    //wg
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}
    int main(){
        char you, comp;
        srand(time(0));
        int number = rand() % 100 + 1;

        if(number<33){
            comp = 's';
        }
        else if(number<33 && number<66){
            comp = 'w';
        }
        else{
            comp = 'g';
        }

        printf("Enter 's' for snake,'w' for water and 'g' for gun\n");
        scanf("%c", &you);
        int result = snackWaterGun(you, comp);
        printf("you choose %c and comptuer choose %c.", you, comp);

        if(result==0){
            printf("Game draw\n");
        }
        else if(result==1){
            printf("you win\n");
        }
        else{
            printf("you lose\n");
        }

        return 0;
    }
