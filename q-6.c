#include<stdio.h>
int main() {
    int i,j;
    for(i=1;i<=4;i++){
        int a=1;
        for(j=1;j<=4;j++){
           printf("%d ",a);
           a=a+2;
        }
        printf("\n");
    }
}

// 1 3 5 7 
// 1 3 5 7 
// 1 3 5 7 
// 1 3 5 7 