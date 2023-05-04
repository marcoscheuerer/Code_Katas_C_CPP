#include <iostream>
#include <gtest/gtest.h>

#include "TwoSum.hpp"

TEST(KataTestSuite, TwoSumTest)
{
    // Arrange
    std::vector<std::int32_t> test_array {3, 6, 9, 1, 4, 0};
    pair_vector check_array { {0, 1}, {2, 5} };

    // Act
    pair_vector result_array = indexOfTwoValuesEqualsSumOfImproved(test_array, 9);

    // Assert
    ASSERT_EQ(check_array, result_array);
}
/*
TEST(KataTestSuite, TwoSumTest_2)
{
    // Arrange
    std::vector<std::int32_t> test_array {3, 6, 9, 1, 4, 0};
    pair_vector check_array { {0, 3}, {4, 5} };

    // Act
    pair_vector result_array = indexOfTwoValuesEqualsSumOf(test_array, 4);

    // Assert
    ASSERT_EQ(check_array, result_array);
}

TEST(KataTestSuite, TwoSumTest_3)
{
    // Arrange
    std::vector<std::int32_t> test_array {3, 6, 9, 1, 4, 0};
    pair_vector check_array { {1, 5} };

    // Act
    pair_vector result_array = indexOfTwoValuesEqualsSumOf(test_array, 6);

    // Assert
    ASSERT_EQ(check_array, result_array);
}

TEST(KataTestSuite, TwoSumTest_4)
{
    // Arrange
    std::vector<std::int32_t> test_array {9, 6, 9, 1, 4, 0};
    pair_vector check_array { {0, 5}, {2, 5} };

    // Act
    pair_vector result_array = indexOfTwoValuesEqualsSumOf(test_array, 9);

    // Assert
    ASSERT_EQ(check_array, result_array);
}

TEST(KataTestSuite, TwoSumTest_5)
{
    // Arrange
    std::vector<std::int32_t> test_array {9, 6, 9, 1, 4, 0};
    pair_vector check_array { };

    // Act
    pair_vector result_array = indexOfTwoValuesEqualsSumOf(test_array, 25);

    // Assert
    ASSERT_EQ(check_array, result_array);
}

TEST(KataTestSuite, TwoSumTest_6)
{
    // Arrange
    std::vector<std::int32_t> test_array { 5 };
    pair_vector check_array { };

    // Act
    pair_vector result_array = indexOfTwoValuesEqualsSumOf(test_array, 5);

    // Assert
    ASSERT_EQ(check_array, result_array);
}

TEST(KataTestSuite, TwoSumTest_7)
{
    // Arrange
    std::vector<std::int32_t> test_array { };
    pair_vector check_array { };

    // Act
    pair_vector result_array = indexOfTwoValuesEqualsSumOf(test_array, 9);

    // Assert
    ASSERT_EQ(check_array, result_array);
}
*/

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
