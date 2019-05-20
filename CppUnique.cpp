#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <string>
#include <stack>
#include "ClassMake.h"
#include "Handler.h"

std::unique_ptr<ClassMake> m_classmake;

Handler* m_handler;

int main(int argc, char* argv[])
{
	auto classmake = ClassMake::make();
	m_classmake = std::move(classmake);

	m_handler = Handler::make();

	m_classmake->plog();
	m_handler->Hlog();

	return 0;
}