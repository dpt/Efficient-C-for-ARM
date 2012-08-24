extern int getlimit(int *pN);

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

/* armcc is clever enough in this case... */

