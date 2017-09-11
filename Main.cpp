#include <iostream>
#include <pthread.h>
#include <string>
#include "recognizer.h"
#include "generator.h"


using namespace std;

int main(int argc, char** argv)
{
    string userInput = argv[1];
    bool recGen = false;

    if(argc != 2)
    {
        cout << "Usage: prog <number>\n\t 1 for recognizer 2 for recognizer generator" << endl;
        return -1;
    }
    else if(userInput.size() != 1)
    {
        cout << "unable to parse Arguments" << endl;
        return -2;
    }
    else
    {
        if(userInput[0] - '0' == 2)
        {
            recGen = true;
        }
    }

    if(recGen)
    {
        //function call to start generation and recognition
    }
    else
    {
        //function call to start iteractive recognition
    }

}
