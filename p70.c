#include<stdio.h>

int main(){
    int row,column;
    printf("entr number of rows : ");
    scanf("%d",&row);
    printf("enter number of columns : ");
    scanf("%d",&column);
    for(int i=1;i<=row;i++){
        for(char j=1;j<=column;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}