#ifndef JOB_HPP
#define JOB_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Job
{
public:
    virtual void afisare() = 0;
    virtual ~Job() = 0;
    virtual bool isInginer_software() = 0;
    virtual int getVenit() = 0;
};

#endif