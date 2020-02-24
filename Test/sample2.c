#include <stdio.h>

int main() {

    printf("計算をします\n");

    int a,b,result;
    char key;

    scanf("%d",&a);
    scanf("%s",&key);
    scanf("%d",&b);

    switch (key)
    {
    case '+':
        result = add(a,b);
        break;

    case '-':
        result = sub(a,b);
        break;

    case '*':
        result = mul(a,b);
        break;

    case '/':
        result = div(a,b);
        break;

    default:
        break;
    }

    printf("%d", result);

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}