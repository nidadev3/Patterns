#include<stdio.h>
#include<stdlib.h>
int main (){
    for (int i=1;i<=5;i++){
        for (int g=1;g<=i;g++){
            printf("*");
        }
        printf("\n");
    }
}