#include <iostream>
#include <map>

#include "TwoSum.hpp"

pair_vector indexOfTwoValuesEqualsSumOf(std::vector<std::int32_t> &array, std::int32_t sum_value)
{
    pair_vector result_array_of_pairs;

    if (array.size() >= 2)
    {
        for (std::int32_t i = 0; i < array.size() - 1; i++)
        {
            for (std::int32_t j = i + 1; j < array.size(); j++)
            {

                    if (array.at(i) + array.at(j) == sum_value)
                    {
                        result_array_of_pairs.push_back({i, j});
                    }

            }
        }
    }
    else
        std::cout << "Too less elements: " << array.size() << std::endl;

    return result_array_of_pairs;
}

pair_vector indexOfTwoValuesEqualsSumOfImproved(std::vector<std::int32_t> &array, std::int32_t sum_value)
{
    std::map<std::int32_t, std::int32_t> numsMap = { };
    pair_vector result_array_of_pairs;

    for (std::int32_t i = 0; i < array.size(); i++)
    {
        const std::int32_t currentMapValue = numsMap.at(array.at(i));
        if (currentMapValue >= 0)
            result_array_of_pairs.push_back({currentMapValue, i});
        else
        {
            const std::int32_t numberToFind = sum_value - array.at(i);
            numsMap.at(numberToFind) = i;
        }

    }

    return result_array_of_pairs;
}
