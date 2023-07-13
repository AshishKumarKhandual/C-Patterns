#include<stdio.h>

int main(){
    int row,column;
    printf("enter number of rows : ");
    scanf("%d",&row);
    printf("enter number of columns : ");
    scanf("%d",&column);
    for(int i=1;i<=row;i++){
        for(int j=column;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}