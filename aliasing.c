/* aliasing.c -- demonstrate that writing through a pointer causes other pointed-to data to be invalidated */

void timers1(int *t1, int *t2, int *step)
{
    *t1 += *step;
    *t2 += *step;
}

void timers2(int *t1, int *t2, int *step)
{
    int s = *step;
    *t1 += s;
    *t2 += s;
}
