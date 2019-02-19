#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <string>
#include <stack>
#include "classmake.h"
#include "c_api.h"

std::unique_ptr<classmake> m_classmake;

Handler* m_handler;

int main(int argc, char* argv[])
{
	m_classmake = classmake::make();
	m_handler = Handler::make();

	m_classmake->plog();

	return 0;
}