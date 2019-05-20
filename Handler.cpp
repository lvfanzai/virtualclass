#include <string>
#include <vector>
#include "Handler.h"

class HandlerImpl final: public Handler {
public:
    HandlerImpl() {
       printf("HandlerImpl\n"); 
    }
    void Hlog() override
    {
        printf("Hlog HandlerImpl\n");
    }
};

Handler* Handler::make(){
    printf("Handler\n");
    return new HandlerImpl();
}