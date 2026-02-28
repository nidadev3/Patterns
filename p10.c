#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 4;

    // ===== TOP PART =====
    for(int i = 0; i < n; i++) {

        // left spaces
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        printf("*");

        // middle spaces + second star
        if(i != 0) {
            for(int j = 0; j < 2*i - 1; j++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    // ===== BOTTOM PART =====
    for(int i = n - 2; i >= 0; i--) {

        // left spaces
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        printf("*");

        if(i != 0) {
            for(int j = 0; j < 2*i - 1; j++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}