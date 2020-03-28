#include <iostream>
using namespace std;

int sum(int a, int b);
void output(int a);

int main() {
    int a;
    a = sum(2,5);
    output(a);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

void output(int a) {
    cout << a << endl;
}