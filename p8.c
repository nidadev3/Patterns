#include<stdio.h>
#include<stdlib.h>
int main (){
    int n=4;
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
printf(" ");
        }
        for(int j=0;j<n-i;j++){
printf("%d",i+1);
        } 
        printf("\n");
    }
    
}