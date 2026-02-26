#include<stdio.h>
#include<stdlib.h>
int main (){
    int n=3;
    int num=1;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
