#pragma once

#include <vector>
#include <cstdint>
#include <map>

using pair_vector = std::vector<std::pair<std::int32_t, std::int32_t>>;

pair_vector indexOfTwoValuesEqualsSumOf(std::vector<std::int32_t> &array, std::int32_t sum_value);

pair_vector indexOfTwoValuesEqualsSumOfImproved(std::vector<std::int32_t> &array, std::int32_t sum_value);
