typedef struct {
    int x,y,z;
} Point3;
typedef struct {
    Point3 *pos, *dir;
} Object;

void setPos1(Object *o)
{
    o->pos->x = 0;
    o->pos->y = 0;
    o->pos->z = 0;
}

void setPos2(Object *o)
{
    Point3 *pos = o->pos;
    pos->x = 0;
    pos->y = 0;
    pos->z = 0;
}

