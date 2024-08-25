#ifndef INIT_HPP
#define INIT_HPP

#include <filesystem>
#include <vector>
#include <string>

namespace fs = std::filesystem;

namespace vc
{
    class Diff
    {
    private:
        fs::path file1, file2;

    public:
        Diff();

        Diff(fs::path file1, fs::path file2);

        void getDiff();

        std::vector<std::string> myers(std::vector<std::string> &str_arr1, std::vector<std::string> &str_arr2);

        std::vector<std::string> createStringArrayFromFile(fs::path filename);
    };
}

#endif