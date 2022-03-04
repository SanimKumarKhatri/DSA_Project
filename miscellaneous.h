#ifndef MISCELLANEOUS_H
#define MISCELLANEOUS_H

#include <time.h>

struct time_exec{
    clock_t start, end;
    double elapsed;
};

#define double CalculateTime(x) initialize_clock();\
    x;\
    stopclock();\
    return s.elapsed;

void initialize_clock();
void stopclock();

#endif // MISCELLANEOUS_H
