#include "diff.hpp"

#include <iostream>

int main(int argc, char const *argv[])
{
    try
    {
        vc::Diff diff("/home/gauri/Documents/projects/CodeTrackr/src/commit.cpp", "/home/gauri/Documents/projects/CodeTrackr/src/tree.cpp");

        diff.getDiff();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
