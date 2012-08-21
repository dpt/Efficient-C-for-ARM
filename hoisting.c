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


