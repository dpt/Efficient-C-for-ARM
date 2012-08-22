typedef unsigned int ShipFlags;

typedef struct {
    unsigned int hasLasers   : 1;
    unsigned int hasMissiles : 1;
    unsigned int hasBomb     : 1;
    unsigned int hasECM      : 1;
} ShipData;

ShipFlags getShipFlags(const ShipData *d)
{
    return (d->hasLasers   << 0) |
           (d->hasMissiles << 1) |
           (d->hasBomb     << 2) |
           (d->hasECM      << 3);
}


typedef struct {
    ShipFlags flags;
} ShipData2;

ShipFlags getShipFlags2(const ShipData2 *d)
{
    return d->flags;
}

