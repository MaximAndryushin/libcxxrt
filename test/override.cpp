#include <exception>
#include <iostream>

auto _ = std::set_terminate([](){ 
    std::cout << "HUI\n";
    std::abort(); 
});