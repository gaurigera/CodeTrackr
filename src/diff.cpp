#include "diff.hpp"

#include <iostream>
#include <filesystem>
#include <vector>
#include <cstdlib>
#include <fstream>

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

std::vector<std::string> vc::Diff::createStringArrayFromFile(fs::path filename)
{
    std::ifstream readFile(filename);
    std::vector<std::string> str_arr;
    std::string str;

    while (std::getline(readFile, str))
    {
        str_arr.push_back(str);
    }

    readFile.close();
    return str_arr;
}

/**
 * @brief Makes use of Myers algorithm [linear-space algorithm] over the array of strings finding the longest common subsequence(LCS) in the array.
 * @param str_arr1 first array of strings (in the first file)
 * @param str_arr2 second array of strings (in the second file)
 *
 * @returns Vector(array) of string(s) which are part of the LCS
 */
std::vector<std::string> vc::Diff::myers(std::vector<std::string> &str_arr1, std::vector<std::string> &str_arr2)
{
    const int len1 = str_arr1.size(), len2 = str_arr2.size();

    std::vector<std::vector<int>> dp(len2 + 1, std::vector<int>(len1 + 1, 0));

    int j = 1, i = 1;
    for (j = 1; j <= len2; j++)
    {
        int prev = 0;

        for (i = 1; i <= len1; i++)
        {

            if (str_arr1[i - 1] == str_arr2[j - 1])
                dp[j][i] = dp[j - 1][i - 1] + 1;
            else
                dp[j][i] = dp[j - 1][i] > dp[j][i - 1] ? dp[j - 1][i] : dp[j][i - 1];
        }
    }

    std::vector<std::string> lcs(dp[len2][len1], "");
    i = len2,
    j = len1;

    int k = dp[len2][len1] - 1;
    while (i > 0 && j > 0)
    {
        if (str_arr1[j - 1] == str_arr2[i - 1])
        {
            lcs[k--] = str_arr1[j - 1];
            i--;
            j--;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
                i--;
            else
                j--;
        }
    }

    return lcs;
}

void vc::Diff::getDiff()
{
    if (!std::filesystem::exists(this->file1) || !std::filesystem::exists(this->file2))
    {
        return;
    }

    auto str_arr1 = this->createStringArrayFromFile(this->file1);
    auto str_arr2 = this->createStringArrayFromFile(this->file2);

    std::vector<std::string> lcs = myers(str_arr1, str_arr2);

    for (auto &&i : lcs)
    {
        std::cout << i << std::endl;
    }
}