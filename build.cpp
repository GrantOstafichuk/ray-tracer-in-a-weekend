#include <cstdlib>
#include <iostream>

int main()
{
    const char* command =
        "g++ main.cpp -o ray";

    std::cout << "Building project...\n";
    int result = std::system(command);

    if (result != 0)
    {
        std::cerr << "Build failed!\n";
        return 1;
    }

    std::cout << "Build successful!\n";
    return 0;
}

