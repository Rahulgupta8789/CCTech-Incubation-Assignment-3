/*
Write a program to accept a list L1 of N integers. Accept integer D. Generate list L2 such that it contains only those integers 
from list L1 which are divisible by D. Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.

Hints => Input : N=8,                                  Output : L1=(10,44,9,23,64,56,78,27), N=8, 
                 L1=(10,44,9,23,64,56,78,27), 	 	            D=3, L2=(9,78,27), Size of L2=3
                 D=3        
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num, temp, div;
    vector<int> vec1;
    vector<int> vec2;

    cout << "Enter the size of the List N : ";
    cin >> num;

    cout << "Enter the Integers List L1 : ";
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        vec1.push_back(temp);
    } 

    cout<< "Enter the Divisor D : ";
    cin>>div;

    cout<<"Original Integers List L1 : ";

    unsigned int vec1_Size = vec1.size();
    for( int i = 0; i < vec1_Size; ++i)
    {
        cout << vec1[i] << " ";
    }

    for( int i = 0; i < vec1_Size; ++i)
    {
        if(vec1[i]%div==0)
        {
            int input=vec1[i];
            vec2.push_back(input);
        }
    }

    unsigned int vec2_Size = vec2.size();
    
    cout<<"\nAfter Divisor 'D' Formed New List L2 : ";
    for( int i = 0; i < vec2_Size; i++)
    {
        cout << vec2[i] << " ";
    }
    
    cout << "\nSize of New List L2 = "<<vec2_Size;
}
