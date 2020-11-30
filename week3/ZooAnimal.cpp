#include "ZooAnimal.h"

void ZooAnimal::Create(char* n, int cageN, int wD, int w)
{
    name = n;
    cageNumber = cageN;
    weightDate = wD;
    weight = w;
};

void ZooAnimal::Destroy()
{
    delete [] name;
};


char* ZooAnimal::reptName ()
{
    return name;
};

int ZooAnimal::daysSinceLastWeighed (int today)
{
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
};

int ZooAnimal::reptWeight ()
{
    return weight;
};

inline int ZooAnimal::reptWeightDate ()
{
    return weightDate;
};

inline void ZooAnimal::changeWeightDate (int today)
{
    weightDate = today;
};

void ZooAnimal::isMotherOf(ZooAnimal* m)
{
        mother = m;
};
