#include <stdio.h>

int my_strlen(char* s) {
    int n = 0;
    while (*s++ != '\0')  n++; 
        return n;
}


int rec_strlen(char* s) {
    int n = 0;
    if (*s == '\0') return n++; 
    return rec_strlen(s-1);
}

int main() {
    char s[] = "IU is a girl!";
    printf("len = %d\n",my_strlen(s));
    printf("len = %d\n",rec_strlen(s));
    return 0;
}
