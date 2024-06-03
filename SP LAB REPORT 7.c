#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

for (sum=0 ;n > 0; n/= 10) {
        i = n % 10;
        sum += i;
    }
    printf("The sum of digits is:%d\n",sum);

    return 0;
}
