#ifndef UTIL_HPP
#define UTIL_HPP

#include <string>
#include <filesystem>

namespace fs = std::filesystem;

namespace vc
{
    /**
     * @param path is path of file we want to hash.
     */
    std::string hashFile(const fs::path &path);
} // namespace vc

#endif