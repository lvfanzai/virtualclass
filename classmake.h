#include <string>
#include <vector>

class classmake {
public:
    virtual void plog() = 0;
    static std::unique_ptr<classmake> make();
};