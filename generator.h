#ifndef GENERATOR_H
#define GENERATOR_H

#include <vector>
#include <iostream>
using namespace std;

class Generator
{
public:
    Generator();
    ~Generator();
    void genFromBase(string base,vector<char> Alphabet, vector<string>* strings);
    void genFromBaseRecoursion(string base, vector<char> Alphabet, vector<string>* strings);
protected:
    int numbIterations;
    int currentIteration;

};




#endif