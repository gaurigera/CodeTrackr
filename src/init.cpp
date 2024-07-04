#include "init.hpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

/**
 * Initialize the repository
 * Give an absolute link of the directory where
 * the .vc directory is to be created
 */
vc::Repository::Repository(fs::path path)
{
    worktree = fs::canonical(path);
    dirPath = worktree / ".vc";
    if (fs::exists(dirPath))
    {
        return;
    }
    try
    {
        // create the .vc directory
        fs::create_directory(dirPath);

        // create subdirectories inside .vc
        fs::create_directories(dirPath / "objects");

        std::cout << "Initialized repositories" << std::endl;
    }
    catch (const fs::filesystem_error &e)
    {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }
}