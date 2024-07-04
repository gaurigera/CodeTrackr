#include "init.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    try
    {
        fs::path repoPath = "/home/gauri/Documents/projects/CodeTrackr/include";
        vc::Repository repo(repoPath);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
