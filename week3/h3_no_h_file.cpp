#include <stdio.h>
#include <iostream>
using namespace std;



class ZooAnimal
{
  private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
  public:
//    ZooAnimal(char*  n, int cageN, int wD, int w);
    void Create(char* n, int cageN, int wD, int w)
{
    name = n;
    cageNumber = cageN;
    weightDate = wD;
    weight = w;

};

    void Destroy (){
    delete [] name;
};// destroy function
    char* reptName (){
    return name;
};
    int daysSinceLastWeighed (int today) {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
   };
};


// ========== an application to use the ZooAnimal class
int main
