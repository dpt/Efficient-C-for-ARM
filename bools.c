/* bools.c -- demonstrate that passing around multiple bools can be wasteful */

typedef unsigned int bool;

bool isEnemy(bool hasLasers,
             bool hasMissiles,
             bool hasBomb,
             bool hasECM)
{
    return hasLasers   ||
           hasMissiles ||
           hasBomb     ||
           hasECM;
}

typedef unsigned int ShipFlags;

#define ShipFlags_HasLasers   (1u << 0)
#define ShipFlags_HasMissiles (1u << 1)
#define ShipFlags_HasBomb     (1u << 2)
#define ShipFlags_HasECM      (1u << 3)

bool isEnemy2(ShipFlags flags)
{
    ShipFlags want = ShipFlags_HasLasers   |
                     ShipFlags_HasMissiles |
                     ShipFlags_HasBomb     |
                     ShipFlags_HasECM;

    return (flags & want) != 0;
}

