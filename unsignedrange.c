int insideRange1(int v, int min, int max)
{
    return v >= min && v < max;
}

int insideRange2(int v, int min, int max)
{
    return (unsigned) (v - min) < (max - min);
}
