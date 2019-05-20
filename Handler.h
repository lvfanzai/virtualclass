#include <string>
#include <vector>

class Handler {
public:
    virtual ~Handler() = default;
    virtual void Hlog() = 0;
    static Handler* make();
};