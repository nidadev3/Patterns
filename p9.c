#include<stdio.h>
#include<stdlib.h>
int main (){
    int n=4;
    for(int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        //nums1:i+1
        for(int j=1;j<=i+1;j++){
            printf("%d",j);
        }
        //num2
        for(int j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}