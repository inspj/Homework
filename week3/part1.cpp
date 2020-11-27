ZooAnimal::ZooAnimal(char* n, int cageN, int wD, int w) {
    Create(char* n, int cageN, int wD, int w);
    }

void ZooAnimal::Create(char* n, int cageN, int wD, int w)
{
    name = n;
    cageNumber = cageN;
    weightDate = wd;
    weight = w;

}



void ZooAnimal::Destroy ()
{
    delete [] name;
}

// -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
    return name;
}

   // -------- member function to return the number of days
   // -------- since the animal was last weighed


int ZooAnimal::daysSinceLastWeighed(int today)
{
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
   }

