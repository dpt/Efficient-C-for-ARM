/* funcarg.c -- demonstrate that function arguments are passed around in int-sized registers then masked in a compiler-dependent manner */

int addints1(int a, int b)
{
    return (int) (a + (b >> 1));
}

short addshorts1(short a, short b)
{
    return (short) (a + (b >> 1));
}

char addchars1(char a, char b)
{
    return (char) (a + (b >> 1));
}
