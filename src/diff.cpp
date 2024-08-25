#include "diff.hpp"

#include <filesystem>

namespace fs = std::filesystem;

vc::Diff::Diff()
{
    file1 = "";
    file2 = "";
}

vc::Diff::Diff(fs::path file1, fs::path file2)
{
    this->file1 = file1;
    this->file2 = file2;
}

std::string vc::Diff::myers()
{
    if (file1.empty() || file2.empty())
    {
        return "";
    }

    
}