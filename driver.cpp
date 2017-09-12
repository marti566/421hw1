#include "driver.h"
#include <iostream>

using namespace std;

Driver::Driver()
{
    //does nothing currently 
}
Driver::~Driver()
{
    //does nothing currently
}
void Driver::recGen(int UserIterations, string base, string userAlphabet)
{
    //starts the process of generating all of the strings in the alphabet
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_t tid[2];
    iterations = UserIterations;

}
void Driver::interactiveRec()
{

}
void * recRunner(void * args)
{
    return args;

}
void * genRunner(void * args)
{

    return args;
}