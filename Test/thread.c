/* 2つのスレッドを作って実行するサンプルプログラム */

#include <pthread.h>
#include <stdio.h>

void *threadA(void *args) {
    for(;;) printf("ThreadA\n");
}

void *threadB(void *args) {
    for(;;) printf("TreadB\n");
}

int main() {
    pthread_t a,b;
    /* スレッドAを作成 */
    pthread_create(&a, NULL, threadA, NULL);
    /* スレッドB作成 */
    pthread_create(&b, NULL, threadB, NULL);

    pthread_join(a, NULL);
    pthread_join(b, NULL);
    return 0;    
}