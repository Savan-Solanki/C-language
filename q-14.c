#include<stdio.h>
int main() {
    int i,j,a;
    a = 1;
    for(i=1;i<=4;i++){
        
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10