/* localvar.c -- demonstrate that restricted-size local variables can damage performance */

int checksum1(const int *data)
{
    char i;
    int  sum = 0;

    for (i = 0; i < 64; i++)
        sum += data[i];

    return sum;
}

int checksum2(const int *data)
{
    int i;
    int sum = 0;

    for (i = 0; i < 64; i++)
        sum += data[i];

    return sum;
}

