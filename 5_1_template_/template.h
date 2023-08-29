#pragma once
#include <vector>
#include <cmath>

template <typename T>
T power (T &n)
{
    return n*n;
}

template<>
std::vector<int> power (std::vector<int>&vec)
{
    for (auto i = 0; i < vec.size(); ++i)
    {
        vec[i] = pow(vec[i],2);
    }

    return vec;
}