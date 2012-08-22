#include <string.h>

int nameToNumber(const char *name)
{
    if      (strcmp(name, "John")   == 0) return 5;
    else if (strcmp(name, "Paul")   == 0) return 2;
    else if (strcmp(name, "George") == 0) return 9;
    else if (strcmp(name, "Ringo")  == 0) return 3;
    else return -1; /* default case */
}

#define NELEMS(a) ((int) (sizeof(a) / sizeof(a[0])))

int nameToNumber2(const char *name)
{
    static const struct
    {
        const char name[7]; /* NB. PIC */
        int        value;
    }
    map[] =
    {
        { "John",   5 },
        { "Paul",   2 },
        { "George", 9 },
        { "Ringo",  3 }
    };
    int i;

    for (i = 0; i < NELEMS(map); i++)
        if (strcmp(name, map[i].name) == 0)
            return map[i].value;

    return -1; /* default case */
}

