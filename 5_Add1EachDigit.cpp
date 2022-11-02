/*
Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

Hints => Input : N=11234              Output : M=22345
*/

#include<iostream>

using namespace std;

int main() 
{
   int N, remainder, temp;
   int sum = 0;
   
   cout << "Enter the 5 number N = ";
   cin >> N;

   if (N > 0 && N <= 99999 )
   {
     cout<<"Enter digit is wright"<<endl;

        while(N > 0)
        {
            remainder = N % 10;
            remainder = remainder + 1;
            sum = (sum * 10) + remainder;
            N = N/10;
        }
        N = sum;
        sum =0;

        while(N > 0)
        {
            remainder = N % 10;
            sum = (sum * 10) + remainder;
            N = N/10;
        }

        cout<<"The Number after adding 1 to each digit = "<< sum;

        return 0;
   }
   else
   {
    cout<<"Enter digit is wrong"<<endl;
   }  
}

