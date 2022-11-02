/*
Write a program to accept a list L1 of N integers. Accept integer M. Multiply each integer in the list by M and generate a new list L2. 
Print the lists L1 and L2.

Hints => Input : N=4,                                  Output : L1=(4,2,1,8), 
                 L1=(4,2,1,8), 	                                L2=(20,10,5,40)
                 M=5
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num, temp, mult;
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

    cout<< "Enter ineteger to multiply list M : ";
    cin>>mult;

    cout<<"Original Integers List L1 : ";
    unsigned int vec1_Size = vec1.size();
    for( int i = 0; i < vec1_Size; i++)
    {
        cout << vec1[i] << " ";
    }

    for( int i = 0; i < vec1_Size; ++i)
    {
        int input=mult*vec1[i];
        vec2.push_back(input);
    }
    
    cout<<"\nAfter Multiplication New List L2 : ";
    for( int i = 0; i < vec1_Size; i++)
    {
        cout << vec2[i] << " ";
    }
}
