#ifndef GENERATOR_H
#define GENERATOR_H

#include <vector>
#include <iostream>
using namespace std;

class generator
{
public:
    generator();
    ~generator();
    void genFromBase(string base,vector<char> Alphabet, vector<string>* strings, int* numbIterations, int* currentIteration);
    void genFromBaseRecoursion(string base, vector<char> Alphabet, vector<string>* strings, int* numbIterations, int* currentIterations);
protected:
    
};




#endif