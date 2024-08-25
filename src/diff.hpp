#ifndef INIT_HPP
#define INIT_HPP

#include <filesystem>
#include <string>

namespace fs = std::filesystem;

namespace vc
{
    class Diff
    {
    public:
        fs::path file1, file2;

        Diff();

        Diff(fs::path file1, fs::path file2);

        std::string myers();
    };
}

#endif