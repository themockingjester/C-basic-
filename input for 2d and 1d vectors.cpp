#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
void main{
    int n=2;
    vector< int > arr;   //single dimension vector
    vector< vector<int> > arr2;  // 2D vector
    for(int i=0; i<n;i++)
    {   int size;
        cin>>size; // taking size of single dimension vector as input
        for(int j=0;j<size;j++)
        {
            int value;
            cin>>value; //getting values for single dimension vector
            
            arr.push_back(value); // first putting values to single dimension vectors

        }
        
        arr2.push_back(arr); //appending single dimension vector to 2D vector
        arr.clear();
    
    } 
    cout<<"one of the element of 2D vector is "<<arr2[1][2];
}
