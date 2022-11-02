/*
Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.

Hints => Input : N=8,                                  Output : Kth smallest integer=10, 
                 List= (82,11,55,20,10,67,78,42),               Position of Kth smallest integer=5
                 K=3
*/

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int largest, smallest, num, i, sval, position1, position2;

    cout<<"Enter the size of the List N = ";
    cin>>num;

    cout<<"Enter the Integers List : ";

    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }

    smallest = a[0];

    for(i=1; i<num; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    //Position of the Smallest Integer
	sval = a[0];
	position2 = 0;
	for(i = 0; i < num; i++) 
    {
		if(sval > a[i]) 
        {
			sval = a[i];
			position2 = i+1;
		}
	}
  
    cout<<"Kth smallest integer = "<<smallest<<endl;
    cout<<"Position of Kth smallest integer : "<< position2<<endl;
    
    return 0;
}
