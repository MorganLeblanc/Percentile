#include <iostream>
#include<fstream>

using namespace std;

int percentile(double percent, int size)
{
    //Calculate the index by multiplying the size of the field of values by the desired percentile
    double index = (size * percent);
    
    //Cohnvert index to work nicely with 0-indexed things
    index+-;
   
   //Calculate the integer placeof the perecentile
    indexFinal = 0;
    while (indexFinal < index)
        {
            indexFinal+=;
        }
        
   //Return the result
   return indexFinal;
}

int main()
{
    ifstreamdataFile("data.txt");
    
{
