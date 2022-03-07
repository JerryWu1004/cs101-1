#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    
    int x;
    FILE* fp;
    time_t t;
    time(&t);
    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問您要購買幾組樂透彩：");
    scanf("%d",&x);
    printf("已為您購買的%d組樂透組合輸出至 lotto.txt",x);
    
    fp = fopen("lotto.txt","w+");
    fprintf(fp,"======== lotto649 =========\n");
    fprintf(fp,"=%.*s =\n",24,ctime(&t));
    srand(time(NULL));
    for (int k = 1; k <= 5; k++) {
        if (k > x) {
            fprintf(fp,"[%d]: -- -- -- -- -- -- --\n",k);
        } else {
            fprintf(fp,"[%d]: ",k);
            int a[70];
            
            int s = rand() % 10+1;
            for (int i = 0; i < 70; i++) {
                a[i] = i+1;
            }
    
            for (int i = 0; i < 69; i++) {
                int r = rand() % 69, tmp = a[i];
                a[i] = a[r];
                a[r] = tmp;
            }
    
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 5-j; k++) {
                    if (a[k] > a[k+1]) {
                        int b = a[k];
                        a[k] = a[k+1];
                        a[k+1] = b;
                    }
                }
            }
    
            for(int i = 0; i <= 5; i++) {
                fprintf(fp,"%0*d ",2,a[i]);
            }
            for(int i = 6; i <= 68; i++) {
                if(a[i] < 11) {
                    fprintf(fp,"%0*d\n",2,a[i]);
                    break;
                }
            }
        }
    
    }
    fprintf(fp,"======== csie@CGU =========\n");
    fclose(fp);
    
    
    return 0;
}