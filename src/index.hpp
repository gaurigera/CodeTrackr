#ifndef INDEX_HPP
#define INDEX_HPP

#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

/**
 * Index files for commit
 */
namespace vc
{
    class Index
    {
    public:
        Index();
    };

    Index::Index()
    {
    }

} // namespace vc

#endif