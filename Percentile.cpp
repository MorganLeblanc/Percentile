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
    //Declare Variables
    bool isFirst = true;
    int size;
    vector<int> values;
    
    //create ifstream totake in file
    ifstream dataFile("data.txt");
    
    //Process dataline byline
    while(!dataFile.eof)
    {
        //If it is thefirstvalueset it to the size, otherwise add to values vector.
        int number;
        dataFile >> number;
        if(isFirst)
        {
            size = number;
        }
        else
        {
            values.push_back(number);
        }
    }
    
    //Sort the vector using vector sort
    sort(values.begin(), values.end());
    
    //Print the three percentiles
    cout << values[(percentile(.25, size))] << '\n';
    cout << values[(percentile(.5, size))] << '\n';
    cout << values[(percentile(.75, size))];
    
    //Print sorted vector to file
    ofstream outputFile;
    outputFile.open("dataSorted.txt");
    for(int i = 0; i < values.size(); i++)
    {
        outputFile << values[i] << ' ';
    }
}
