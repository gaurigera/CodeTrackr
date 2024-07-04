#ifndef COMMIT_HPP
#define COMMIT_HPP

#include <string>

namespace vc
{
    class CommitObj
    {
    private:

    public:
        std::string message;
        std::string parent;
        std::string tree;

        // Constructor
        CommitObj();
    };

} // namespace vc

#endif // COMMIT_HPP
