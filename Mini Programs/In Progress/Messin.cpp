

#include "../../src/header.h"


void Bar(int Max, int* Result)
{
    if (Max > 0)
    {
        *Result += Max;
        Bar(Max - 1, Result);
    }
}

int Foo()
{
    int Max = 3;
    int Result = 0;
    Bar(Max, &Result);
    return Result;
}
