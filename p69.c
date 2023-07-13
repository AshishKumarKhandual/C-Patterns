#include<stdio.h>

int main(){
    int row,column;
    printf("enter number of rows : ");
    scanf("%d",&row);
    printf("enter number of columns : ");
    scanf("%d",&column);
    for(int i=1;i<=row;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a); 
            a=a+2;
        }
        printf("\n");
    }
}