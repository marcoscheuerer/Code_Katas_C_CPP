#include "FizzBuzz.hpp"

#include <iostream>

std::vector<std::string> FizzBuzz::fizzBuzz(std::int32_t num)
{
    std::vector<std::string> list {};

    for (std::int32_t i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            list.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            list.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            list.push_back("Buzz");
        }
        else
        {
            list.push_back(std::to_string(i));
        }
    }

    return list;
}

void print_vector(std::vector<std::string> vec)
{
    std::cout << "[";

    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i];

        if (i < vec.size() - 1)
            std::cout << ", ";
    }

    std::cout << "]";

    std::cout << '\n';
}
