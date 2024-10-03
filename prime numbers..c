#include <stdio.h>
int is_prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  } }
    return 1; 
}
int main() {
    int limit;
    printf("Enter the limit up to which you want to print prime numbers: ");
    scanf("%d", &limit);
    printf("Prime numbers up to %d are:\n", limit);
    for (int num = 2; num <= limit; num++) {
        if (is_prime(num)) {
            printf("%d ", num);}}
    printf("\n");
    return 0;
}
