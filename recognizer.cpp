#include "recognizer.h"

Recognizer::Recognizer()
{
    //does nothing right now
}
Recognizer::~Recognizer()
{

    //does nothing right nowe
}

bool Recognizer::inlang(string target)
{
    for(int i = 0; i < target.size(); i++)
    {
        if(target[i] != '0' && target[i] != '1')
        {
            return false;
        }
    }
    return true;

    //take a string, check if its a binary number, return true if true else false
}