#include <iostream>
#include <vector>
#include <cstdint>
#include <gtest/gtest.h>

#include "FindPair.hpp"

TEST(kata_test, find_pair_for_11)
{
    // Arrange
    std::vector<int32_t> arr{4, 5, 1, -3, 6};
    std::int32_t k = 11;

    // Act
    bool isTrue = findPair(arr, k);

    // Assert
    ASSERT_EQ(1, isTrue);
}

TEST(kata_test, find_pair_for_neg2)
{
    // Arrange
    std::vector<int32_t> arr{4, 5, 1, -3, 6};
    std::int32_t k = -2;

    // Act
    bool isTrue = findPair(arr, k);

    // Assert
    ASSERT_EQ(1, isTrue);
}

TEST(kata_test, find_pair_for_8)
{
    // Arrange
    std::vector<int32_t> arr{4, 5, 1, -3, 6};
    std::int32_t k = 8;

    // Act
    bool isTrue = findPair(arr, k);

    // Assert
    ASSERT_EQ(0, isTrue);
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
