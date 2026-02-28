#include<stdio.h>
#include<stdlib.h>
int main (){
    int n=4;
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            printf("*");
        }
        for(int j=0;j<2*(n-i-1);j++){
            printf(" ");
        }
        for (int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
      for(int i=n-2;i>0;i--){
        for (int j=0;j<i+1;j++){
            printf("*");
        }
        for(int j=0;j<2*(n-i-1);j++){
            printf(" ");
        }
        for (int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}