#include "miscellaneous.h"

void initialize_clock()
{
    s.start=clock();
}

void stopclock()
{
    s.stop=clock();
    s.elapsed = double(s.end-s.start)/CLOCKS_PER_SEC;
}
