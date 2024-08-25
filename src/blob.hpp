#ifndef BLOB_HPP 
#define BLOB_HPP

#include <string>
#include <vector>

namespace vc
{
    class BlobObj
    {
    private:
        std::string metadata;
        std::string fileContent;
    public:
        BlobObj();

        bool storeFileContent(const std::string &filePath);
    };
    
} // namespace vc

#endif