#include "classmake.h"


class classmakeImpl  final : public classmake {
public:
    classmakeImpl(){
        printf("test make\n");
    }
    void plog() override
    {
        printf("plog\n");
    }
};


std::unique_ptr<classmake> classmake::make()
{
    return std::make_unique<classmakeImpl>();
}