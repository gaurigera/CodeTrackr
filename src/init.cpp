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
    // no need to create if already created
    if (fs::exists(dirPath))
    {
        return;
    }
    try
    {
        // create the .vc directory in the specified path
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

/**
 * Return true if the project is initialized
 * otherwise return false
 */
bool vc::Repository::checkVCRepo(fs::path path)
{
    if (!fs::exists(dirPath))
        return false;

    return true;
}