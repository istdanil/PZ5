#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    int dp[100000];
    printf("Введіть довжину послідовності (n): ");
    scanf_s("%d", &n);

    dp[1] = 2;
    dp[2] = 4;
    dp[3] = 7;

    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 12345;
    }
    printf("Кількість послідовностей довжиною %d: %d\n", n, dp[n]);
    

    return 0;
}
