int fact1(int N)
{
    int i, fact = 1;
    for (i = 1; i <= N; i++)
        fact *= i;
    return fact;
}

int fact2(int N)
{
    int fact = 1;
    do
        fact *= N;
    while (--N != 0);
    return fact;
}
