#include <string>
#include <vector>

class ClassMake {
public:
    virtual ~ClassMake() = default;
    virtual void plog() = 0;
    static std::unique_ptr<ClassMake> make();
};