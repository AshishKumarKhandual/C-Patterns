#include<stdio.h>

int main(){
    int row,column;
    printf("enter number of rows : ");
    scanf("%d",&row);
    int a=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a); 
            a=a+1;
        }
        printf("\n");
    }
}