#include<stdio.h>

int main(){
    int rows = 5;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < rows - i - 1; j++){
            printf(" ");
        }
        for (int j = 0; j < rows; j++){
            if(i==1 || i==5 || j==1 || j==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
        }
}