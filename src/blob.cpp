#include "blob.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

using namespace vc;

/**
 *  File tracking using a blob object
 */
BlobObj::BlobObj()
{
}

bool BlobObj::storeFileContent(const std::string &filePath)
{
    // Read file content
    std::ifstream file(filePath, std::ios::binary);
    if (!file)
    {
        std::cerr << "File cannot be accessed!" << std::endl;
        return false;
    }
    
    std::ostringstream oss;
    oss << file.rdbuf();
    fileContent = oss.str();
}