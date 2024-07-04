#ifndef INIT_HPP
#define INIT_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

namespace vc
{
    class Repository
    {
    public:
        fs::path worktree;
        fs::path dirPath;

        /**
         * @param path has the path of the directory structure
         * where the repository needs to be initialized.
         */
        Repository(fs::path path);

        /**
         * @param path has the path of the directory structure
         * where we check if the repo is initialized or not.
         */
        bool checkVCRepo(fs::path path);
    };
} // namespace vc

#endif