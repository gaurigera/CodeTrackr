#include "util.hpp"

#include <fstream>
#include <sstream>
#include <iomanip>
#include <openssl/sha.h>

std::string vc::hashFile(const fs::path &path)
{
    std::ifstream file(path, std::ios::binary);

    // error if not able to work with file.
    if (!file.is_open())
        throw std::runtime_error("File might not exist! " + path.string());

    std::ostringstream oss;
    oss << file.rdbuf();
    std::string content = oss.str();

    // performing hashing using SHA1
    unsigned char hash[SHA_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, content.c_str(), content.size());
    SHA256_Final(hash, &sha256);

    std::stringstream strs;

    // loop runs 20 times
    for (int i = 0; i < SHA_DIGEST_LENGTH; i++)
        strs << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];

    return strs.str();
}