#include<stdio.h>                                                  
int main() {                                                       
    int i,j;                                                 
    for(i=1;i<=4;i++){                                                
       int a=1;
        for(j=1;j<=4;j++){
            int d=a+64;
            char ch=(char)d;
           printf("%c ",ch);
           a++;
        }
        printf("\n");
    }
}

// A B C D 
// A B C D 
// A B C D 
// A B C D 