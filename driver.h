#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
#include <string>
#include "generator.h"
#include "recognizer.h"

using namespace std;

class Driver
{
public:
    Driver();
    ~Driver();
    void recGen(int iterations, string base);
    void interactiveRec();
protected:
    //thread runner memberfucntions
    void * recRunner(void* args);
    void * genRunner(void* args);
    //generator and recognzier members
    Generator gen;
    Recognizer rec;

};
#endif