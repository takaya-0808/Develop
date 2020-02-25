#include<stdio.h>

char Stack[100];
char StackPointer = 0;

int main() {
    char list = ["1","2","3","4","5","6","7","8","9","0"];
    for(i=0;i<10;i++){
        Push(list[i]);
        if(i/3==0){
            printf(Pop());
        }
    }
    return 0;
}

void Push(char Data) {
    Stack[StackPointer] = Data;
    StackPointer++;
}

void Pop() {
    StackPointer--;
    return Stack[StackPointer];
}