#include <stdio.h>

int _sum(int x, int y) {
    int num = x+y;
    return num;
}

int _sub(int x, int y) {
    int num = x-y;
    return num;
}

int _mult(int x, int y) {
    int num = x*y;
    return num;
}

int _div(int x, int y) {
    int num = x/y;
    return num;
}

int _power(int x, int y) {
    if(y==1)return x;
    return x*_power(x, y-1);
}

int main() {
    
    int x, y, choice;
    int (*ope[4])(int, int);
    ope[0] = _sum;
    ope[1] = _sub;
    ope[2] = _mult;
    ope[3] = _div;
    ope[4] = _power;
    
    printf("Enter two integer: ");
    scanf("%d%d",&x, &y);
    
    printf("Enter 0 to +, 1 to -, 2 to *, 3 to /, 4 to power\n");
    scanf("%d",&choice);
    
    printf("Answer is %d",ope[choice](x, y));
    return 0;
    
}
