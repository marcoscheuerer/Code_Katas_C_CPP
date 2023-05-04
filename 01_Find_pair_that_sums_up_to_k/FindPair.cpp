#include "FindPair.hpp"
#include <algorithm>
#include <iostream>

// 1. Solution: not so good
// Time complexity:  O(n²) -> two loops to iterate
// Space complexity: O(1)
/*
bool findPair(std::vector<std::int32_t> arr, std::int32_t k)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        for (std::size_t j = i + 1; j < arr.size(); j++)
        {
            if (arr.at(i) + arr.at(j) == k)
                return true;
        }
    }

    return false;
}
*/

// 2. Solution:
bool findPair(std::vector<std::int32_t> arr, std::int32_t k)
{
    std::sort(arr.begin(), arr.end());

    std::uint32_t left = 0;
    std::uint32_t right = arr.size() - 1;

    if (arr[left] + arr[right] == k)
    {

    }
}
