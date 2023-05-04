#include <iostream>

#include "FizzBuzz.hpp"

int main()
{
    FizzBuzz *myFizzBuzz = new FizzBuzz();

    print_vector(myFizzBuzz->fizzBuzz(20));

    return 0;
}
