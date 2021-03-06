#include <stdio.h>

int rec_dec(char* s) {
    if (!*s) return 0;
    printf("%c,",*s);
    return 1+rec_dec(s+1);
}

FILE* hanoi;

void hanoi_tower(int n, char A, char B, char C) {
    if(n == 1) {
    	hanoi = fopen("hanoi.txt","a+");
    	fprintf(hanoi,"Move %d disk from %c to %c\n",n,A,C);
    	fclose(hanoi);
    } else {
        hanoi_tower(n-1, A, C, B);
        hanoi = fopen("hanoi.txt","a+");
        fprintf(hanoi,"Move %d disk from %c to %c\n",n,A,C);
        fclose(hanoi);
        hanoi_tower(n-1, B, A, C);
    }
}


int multiplication(int i, int j){
    if (i == 10) {
        return 0;
    }
    else if (j == 9) {
        printf("%d*%d=%d\n", i, j, i*j);
        multiplication(i+1, 1);
    }
    else {
        printf("%d*%d=%d\t", i, j, i*j);
        multiplication(i, j+1);
    }
}

int main() {
    char s[] = "1234567890";
    rec_dec(s);
    printf("func#1--------------------\n");
    hanoi_tower(16,'A','B','C');
    printf("func#2--------------------\n");
    multiplication(1,1);
    printf("func#3--------------------\n");
    return 0;
}
