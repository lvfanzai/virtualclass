#include <string>
#include <vector>

class Handler {
public:
    virtual void Hlog() = 0;
    static Handler* make();
};