#ifndef ZOOANIMAL_H_INCLUDED
#define ZOOANIMAL_H_INCLUDED

enum scale {ounces, kilograms};

class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int);
      void Destroy ();
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate ();
      int daysSinceLastWeighed (int today);
      void isMotherOf (ZooAnimal *);

   };





#endif // ZOOANIMAL_H_INCLUDED
