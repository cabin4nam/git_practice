#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calc_gugu(int gugu[9][10]){
    for(int i=0; i<8; i++){
        for(int j=0 j<9; j++){
            gugu[i][j] = (i+2)*(j+1);
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            gugu[i][9] += gugu[i][j]; 
        }
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<9; j++){
            gugu[8][j] += gugu[i][j]; 
        }
    }
    
}

void print_gugu(int gugu[9][20]){
    for(int i=0; i<9; i++){
        for(int j=0; j<8; j++){
            printf("%d * %d = %d |", i+1, j+1, gugu[i][j]);
        }
    printf("------");
    }
    printf("\n")
}

void main(){
    int gugu[9][10] = {0};
    printf("1번 분반 학번 유진 \n");
    calc_gugu(gugu);
    print_gugu(gugu);
}