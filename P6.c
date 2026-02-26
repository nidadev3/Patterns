#include<stdio.h>
#include<stdlib.h>
int main (){
    int n=4;
    
  
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            
            printf("%c ",'A'+i);
         
        }
        printf("\n");
    }
}