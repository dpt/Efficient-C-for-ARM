/* padding.c -- demonstrate that the padding added to structures can be minimised */

/* original structure */
struct
{
    unsigned char type;
    int           product;
    short         delta;
}
structA;

/* ordered large-to-small to minimise padding */
struct
{
    int           product;
    short         delta;
    unsigned char type;
}
structB;

/* write a function which prints sizeof the structures */

extern int ANSI;
