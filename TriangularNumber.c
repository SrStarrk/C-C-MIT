#include <stdio.h>

void numberTri(int number) {
    for (int i = 1; i <= number; i++){
            int n = i * (i + 1) / 2;
            printf("%d\n", n);
    }
}

int main(){
    numberTri(100);
    return 0;
}