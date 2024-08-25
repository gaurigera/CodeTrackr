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
    dirPath = worktree / ".trackr";
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

        // create files
        std::ofstream outFile(dirPath / "ref");  // ref will store the reference of the latest commit
        std::ofstream outFile1(dirPath / "desc"); // desc will store the description of the project (can be configured).

        outFile << "Repository initialized for " << worktree.filename().string();

        outFile.close();
        outFile1.close();

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
bool vc::Repository::checkVCRepo()
{
    if (!fs::exists(dirPath))
        return false;

    return true;
}

/**
 * Start tracking of a file.
 * The file tracking allows the VC to keep track
 * of the changes.
 */
bool vc::Repository::addFileTracking(fs::path path)
{
    if (!checkVCRepo())
        throw std::runtime_error("Error: Repository not initialized!");
    
    return false; //to change
}