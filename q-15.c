#include<stdio.h>
int main() {
    int i,j,a;
    a = 1;
    for(i=1;i<=4;i++){
        
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a = a+2;
        }
        printf("\n");
    }
}

// 1 
// 3 5 
// 7 9 11 
// 13 15 17 19 