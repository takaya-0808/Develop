#include　<stdio.h>

int main(){
    int get_int;

    printf("数字を入力してください");
    scanf("%d", &get_int);

    if (get_int < 1000) printf("入力値は1000より小さい");
    else
    {
        if (get_int == 10000) printf("入力値は1000です");
        else
        {
            printf("入力値は1000より高いです");
        }
        
    }
    
    return 0;
}
