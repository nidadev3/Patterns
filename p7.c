#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=4;
    int num=1;
    for(int i=n;i>0;i--){
        for(int j=i+1;j>0;j--){
            printf("%d ",num);
            num++; 
        }
        printf("\n");
    }
}