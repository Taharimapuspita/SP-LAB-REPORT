#include <stdio.h>

int main() {
int P, R, T, SI;

printf("Enter the principal amount: ");
scanf("%d", &P);

printf("Enter the rate of interest: ");
scanf("%d", &R);

printf("Enter the time in years: ");
scanf("%d", &T);

SI = P*R*T/100;

printf("Simple interest is: %d\n", SI);

    return 0;
}
