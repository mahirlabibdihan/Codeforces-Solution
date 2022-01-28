template <typename E>
bool isSigned()
{
    return E(-1) < E(0);
}
template <typename E>
E MIN_VALUE()
{
    if (isSigned<E>()) // Signed
    {
        return -((E(1) << (8 * sizeof(E) - 2)) - 1);
    }
    else
    {
        return E(0);
    }
}
template <typename E>
E MAX_VALUE()
{
    if (isSigned<E>()) // Unsigned
    {
        return (E(1) << (8 * sizeof(E) - 2)) - 1;
    }
    else
    {
        return ((E(1)) << (8 * sizeof(E) - 1)) - 1;
    }
}
template <typename E>
E maxOfArray(vector<E> &a)
{
    E _max = MIN_VALUE<E>();
    for (E &i : a)
    {
        _max = max(_max, i);
    }
    return _max;
}
template <typename E>
E minOfArray(vector<E> &a)
{
    E _min = MAX_VALUE<E>();
    for (E &i : a)
    {
        _min = min(_min, i);
    }
    return _min;
}
template <typename E>
E sumOfArray(vector<E> &a)
{
    E sum = 0;
    for (E &i : a)
    {
        sum += i;
    }
    return sum;
}