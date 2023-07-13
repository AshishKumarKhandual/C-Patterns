#include<stdio.h>

int main(){
    int row,column;
    printf("enter number of rows : ");
    scanf("%d",&row);
    printf("enter number of columns : ");
    scanf("%d",&column);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%d ",j);
            }else{
                printf("%c ",j+64);
            }
        }
        printf("\n");
    }
}