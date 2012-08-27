/* sentinels.c -- demonstrate that inserting a known terminating value can create more efficient loops */

int search1(int *list, int N, int want)
{
    int i;

    for (i = 0; i < N; i++)
        if (list[i] == want)
            return i;

    return -1;
}

int search2(int *list, int N, int want)
{
    int i;

    list[N] = want;

    i = 0;
    while (list[i] != want)
        i++;

    if (i == N)
        return -1;

    return i;
}

