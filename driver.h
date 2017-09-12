#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
#include <string>
#include "generator.h"
#include "recognizer.h"

using namespace std;
struct genArgs
{

};

class Driver
{
public:
    Driver();
    ~Driver();
    void recGen(int UserIterations, string base, string userAlphabet);
    void interactiveRec();
protected:
    //thread runner memberfucntions
    void * recRunner(void* args);
    void * genRunner(void* args);
    //generator and recognzier members
    Generator gen;
    Recognizer rec;
    string Alphabet;
    int iterations;
    pthread_mutex_t editTasks;
    vector<string> checkQueue;
};
#endif