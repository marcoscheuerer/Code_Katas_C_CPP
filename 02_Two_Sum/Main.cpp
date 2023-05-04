#include <iostream>
#include <vector>
#include "TwoSum.hpp"

int main()
{
    std::vector<std::int32_t> my_vector {3, 6, 9, 1, 4, 0};
    pair_vector result_vector;
    std::int32_t sum = 4;

    result_vector = indexOfTwoValuesEqualsSumOf(my_vector, sum);

    for (auto &values : result_vector)
        std::cout << "(" << values.first << ", " << values.second << ") ";

    std::cout << std::endl;

    return 0;
}
