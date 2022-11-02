/*
Write a program to a accept a list of N integers. Find the largest and the smallest number in the list and 
their respective positions in the list.

Hints => Input : N=6, List = (55,3,23,452,82)              Output : Largest integer=452, 
                                                                    Position of Largest integer=4,
                                                                    Smallest integer=3, 
                                                                    Position of smallest integer=2
*/

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int largest, smallest, num, i, e, sval, lval, position1, position2;

    cout<<"Enter the size of the List N = ";
    cin>>num;

    cout<<"Enter the Integers List : ";
    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }

    largest = a[0];
    smallest = a[0];

    for(i=1; i<num; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    //Position of the Largest Integer
	sval = a[0];
	position1 = 0;
	for(i = 0; i < num; i++) 
    {
		if(sval < a[i]) 
        {
			sval = a[i];
			position1 = i+1;
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
    
    cout<<"Largest Integer = "<<largest<<endl;
    cout<<"Position of the Largest Integer : "<< position1<<endl;

    cout<<"Smallest Integer = "<<smallest<<endl;
    cout<<"Position of the Smallest Integer : "<< position2<<endl;
    
    return 0;
}
