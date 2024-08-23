#include<stdio.h>                                                  
int main() {                                                       
    int i,j;                                                 
    for(i=1;i<=5;i++){                                                
       int a=1;
        for(j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;
            a++;
             if(i%2){
                printf("%d ",j);
             }else{
                printf("%c ",ch);
             }
     
        }
        printf("\n");
    }
}

// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5