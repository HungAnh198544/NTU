#include <stdio.h>

long long GiaiThua(int n)
{
    if (n <= 1)
        return 1;
    return n * GiaiThua(n - 1);
}

void DoiCoSo2(int n)
{
    if (n == 0)
        return;
    DoiCoSo2(n / 2);
    printf("%d", n % 2);
}

long long Pell(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return 2 * Pell(n - 1) + Pell(n - 2);
}

float TongNghichDao(int n)
{
    if (n == 1)
        return 1.0;
    return TongNghichDao(n - 1) + 1.0 / n;
}

float TongLuyThua(int n)
{
    if (n == 1)
        return 1;
    float mu = 1;
    for (int i = 1; i <= n - 1; i++)
        mu *= n;
    return TongLuyThua(n - 1) + mu;
}

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

long long TongGiaiThua(int n)
{
    if (n == 1)
        return 1;
    return TongGiaiThua(n - 1) + GiaiThua(n);
}

long long Fibo(int n)
{
    if (n <= 1)
        return n;
    return Fibo(n - 1) + Fibo(n - 2);
}

long long TongFibo(int n)
{
    if (n == 1)
        return 1;
    return TongFibo(n - 1) + Fibo(n);
}

float TongPhanSo(int n)
{
    if (n == 1)
        return 1.0 / 2;
    return TongPhanSo(n - 1) + (float)n / (n + 1);
}

int TongNhan(int n)
{
    if (n == 1)
        return 1 * 2;
    return TongNhan(n - 1) + n * (n + 1);
}

int main()
{
    int n;

    printf("Giai thua:\n");
    n = 5;
    printf("%d! = %lld\n", n, GiaiThua(n));

    printf("Doi co so 10 sang 2:\n");
    n = 13;
    printf("%d (10) = ", n);
    DoiCoSo2(n);
    printf(" (2)\n");

    printf("So Pell:\n");
    n = 7;
    printf("P(%d) = %lld\n", n, Pell(n));

    printf("Tong nghich dao:\n");
    n = 5;
    printf("S(%d) = %.4f\n", n, TongNghichDao(n));

    printf("Tong luy thua dac biet:\n");
    n = 5;
    printf("S(%d) = %.0f\n", n, TongLuyThua(n));

    printf("UCLN theo Euclid:\n");
    int a = 48, b = 18;
    printf("UCLN(%d, %d) = %d\n", a, b, UCLN(a, b));

    printf("Tong giai thua:\n");
    n = 5;
    printf("S(%d) = %lld\n", n, TongGiaiThua(n));

    printf("Tong n so Fibonacci dau tien:\n");
    n = 6;
    printf("S(%d) = %lld\n", n, TongFibo(n));

    printf("Tong S(n) = 1/2 + 2/3 + ... + n/(n+1):\n");
    n = 5;
    printf("S(%d) = %.4f\n", n, TongPhanSo(n));

    printf("Tong S(n) = 1×2 + 2×3 + ... + n×(n+1):\n");
    n = 5;
    printf("S(%d) = %d\n", n, TongNhan(n));

    return 0;
}
