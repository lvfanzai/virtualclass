#include "ClassMake.h"

class ClassMakeImpl  final : public ClassMake {
public:
    ClassMakeImpl(){
        printf("ClassMakeImpl\n");
    }
    void plog() override
    {
        printf("plog ClassMakeImpl\n");
    }
};


std::unique_ptr<ClassMake> ClassMake::make()
{
    printf("ClassMake\n");
    return std::make_unique<ClassMakeImpl>();
}