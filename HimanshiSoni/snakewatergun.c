#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int snakeWaterGun(int you, int comp) {
    switch(you) {
        case 0: if(comp==0) {printf("Draw!");}
                else if(comp==1) {printf("Computer win...");}
                else {printf("You win...");}
                break;
        case 1: if(comp==0) {printf("You Win...");}
                else if(comp==1) {printf("Draw!");}
                else {printf("Computer win...");}
                break;
        case 2: if(comp==0) {printf("Computer win...");}
                else if(comp==1) {printf("You win...");}
                else {printf("Draw!");}
                break;
        default: printf("Wrong input...");
    }
    return 0;
}

int main()
{
    int you,comp;
    comp=rand()%3;
    printf("Enter '0' for snake, '1' for gun and '2' for water:");
    scanf("\n %d",&you);
    printf("\n");
    snakeWaterGun(you,comp);
    return 0;
}
