extern void translate(int);
extern void get_metrics(int);
extern void draw(int);

#define TRANSLATE (1u << 0)
#define METRICS   (1u << 1)
#define DRAW      (1u << 2)

typedef struct text text;

struct text
{
    unsigned int flags;
};

void rendertext1(text *txt, int N)
{
    int i;

    txt->flags |= METRICS; /* for example */

    for (i = 0; i < N; i++)
    {
        if (txt->flags & TRANSLATE)
            translate(i);
        else if (txt->flags & METRICS)
            get_metrics(i);
        else
            draw(i);
    }
}

void rendertext2(text *txt, int N)
{
    int i;

    if (txt->flags & TRANSLATE)
    {
        for (i = 0; i < N; i++)
            translate(i);
    }
    else if (txt->flags & METRICS)
    {
        for (i = 0; i < N; i++)
            get_metrics(i);
    }
    else
    {
        for (i = 0; i < N; i++)
            draw(i);
    }
}

