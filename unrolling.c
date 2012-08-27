/* unrolling.c -- demonstrate that loops can be unrolled to increase speed */

int countbits1(unsigned int N)
{
    int nbits = 0;
    while (N) {
        if (N & 1) nbits++;
        N >>= 1;
    }
    return nbits;
}

int countbits2(unsigned int N)
{
    int nbits = 0;
    while (N) {
        if (N & 1) nbits++;
        if (N & 2) nbits++;
        if (N & 4) nbits++;
        if (N & 8) nbits++;
        N >>= 4;
    }
    return nbits;
}

