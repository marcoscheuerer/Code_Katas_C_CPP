#include "FindPair.hpp"

/**
 * @brief Finds the pair in an array which sum is k
 *
 * @param arr Array of integers
 * @param k The result of the addition of 2 values in the array
 * @return true If the values are found in array
 * @return false If the values are not in array
 */
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
