#include<stdio.h>                                                  
int main() {                                                       
    int i,j;                                                 
    for(i=1;i<=4;i++){                                                
       int a=1;
        for(j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;
           printf("%c ",ch);
           a++;
        }
        printf("\n");
    }
}

// A 
// A B 
// A B C 
// A B C D 