#include <stdio.h>

struct Inner
{
    int innerMember1;
    char innerMember2;
};

struct Outer
{
    int outerMember;
    struct Inner nestedStucture;
};

int main()
{
    struct Outer outerStructure;
    outerStructure.outerMember = 10;
    outerStructure.nestedStucture.innerMember1 = 12;
    outerStructure.nestedStucture.innerMember2 = 'A';
    return 0;
}