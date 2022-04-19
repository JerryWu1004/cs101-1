#include <stdio.h>

int swap(int* i,int* j) {
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
    printf("No.1 -------------------\n");
    printf("after swap, n = %d, m = %d\n",*i, *j);
}

int swaparray(int a[10], int b[10], int size) {
    int tmp;
    for (int i = 0; i < 10; i++) {
        tmp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = tmp;
    }
}

void printarray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        if(i == (size-1)) {
            printf("%d",a[i]);
        } else {
            printf("%d, ",a[i]);
        }
    }
    printf("]\n");
}

char* copy_string (char* s){
    int len = 0;
    while (*(s+len) != '\0') len++;
    char* New = calloc (len+1, sizeof(char));
    for (int i=0; i<=len; i++)  *(New+i) = *(s+i);
    return New;
}

int main() {
    
    int n, m;
    int size = 10;
    int source[10] = {0,9,8,7,6,5,4,3,2,1};
    int dest[10] = {10,20,30,40,50,60,70,80,90,100};
    n = 1;
    m = 2;
    char str[] = "IU!IU!IU!IU!";
    char* cp_str = copy_string(str);
    swap(&n,&m);
    swaparray(&source,&dest,size);
    printf("No.2 -------------------\n");
    printf("after swap array, source array = [");
    printarray(source, size);
    printf("after swap array, dest array = [");
    printarray(dest, size);
    printf("No.3 -------------------\n");
    printf("copy string = %s\n",cp_str);
    free(cp_str);
    cp_str = NULL;
    return 0;
    
}
