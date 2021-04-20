#ifndef MODULAREXPO_HPP
#define MODULAREXPO_HPP

int modExpo(int v, int n, int m)
{
    int x = 1;
    v = v % m;
    for(int i = 0; i < n; i++)
    {
        x = (x * v) % m;
    }

    return x;
}

#endif