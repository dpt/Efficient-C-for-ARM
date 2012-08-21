int nameToNumber3(const char *name)
{
    static const struct map
    {
        const char name[7]; /* NB. PIC */
        int        value;
    }
    map[] = ...

    const struct map *entry, *end;

    end = map + NELEMS(map);
    for (entry = &map[0]; entry < end; entry++)
        if (strcmp(name, entry->name) == 0)
            return entry->value;

    return -1; /* default case */
}
