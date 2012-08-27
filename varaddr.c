/* varaddr.c -- demonstrate that taking the address of a variable can result in a cost to accessing it */

extern int getlimit(int *pN);

/* armcc is clever enough in this case... */
int sum(const int *array)
{
    int N;
    int sum;
    int i;

    getlimit(&N);

    sum = 0;
    for (i = 0; i < N; i++)
        sum += array[i];

    return sum;
}

/* gcc 4.4.3 resolves the indirected j back into a register (j is an alias for sum) */
int sum2(const int *array)
{
    int N;
    int sum;
    int i;
    int *j = &sum;

    getlimit(&N);

    *j = 0;
    for (i = 0; i < N; i++)
        *j += array[i];

    return *j;
}

/* gcc 4.4.3 seems to show the problem when i add in a function call */
/* ads armcc too */
extern int fn(int);
int sum3(const int *array)
{
    int N;
    int sum;
    int i;

    getlimit(&N);

    sum = 0;
    for (i = 0; i < N; i++)
        sum += fn(array[i]);

    return sum;
}

