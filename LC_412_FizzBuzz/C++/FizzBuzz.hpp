#pragma once

#include <vector>
#include <cstdint>
#include <string>

class FizzBuzz
{

    public:
        FizzBuzz() = default;
        std::vector<std::string> fizzBuzz(std::int32_t num);

};

void print_vector(std::vector<std::string> vec);
