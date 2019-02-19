#include <string>
#include <vector>
#include "c_api.h"

class HandlerImpl final: public Handler {
public:
    HandlerImpl() {
       printf("HandlerImpl\n"); 
    }
    void Hlog() override
    {
        printf("Hlog\n");
    }
};

Handler* Handler::make(){
    printf("test point\n");
    return new HandlerImpl();
}