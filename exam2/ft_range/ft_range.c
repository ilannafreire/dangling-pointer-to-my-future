int *ft_range(int start, int end)
{
    int *range;
    int i;
    int size;

    size = end - start;
    if (size < 0)
        size = -size;
    size ++;
    
    range = malloc(sizeof(int) * size);
    if (!range)
        return (NULL);
    i = 0;
    while (i < size)
    {
        range[i] = start;
        start += (start < end) ? 1 : -1;
        i++;
    }
    return (range);
}