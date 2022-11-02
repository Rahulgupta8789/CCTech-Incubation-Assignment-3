/*
Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.

Hints => Input : N=123              Output : Sum of digits=6
*/

#include<iostream>

using namespace std;

int main() 
{
   int N;
   int sum = 0;
   
   cout << "Enter the 5 number N = ";
   cin >> N;

   if (N > 0 && N <= 99999 )
   {
     cout<<"Enter digit is wright"<<endl;

      while (N != 0) 
      {
         sum = sum + N % 10;
         N = N / 10;
      }
      
   cout << "Sum of Digits = "<< sum;
   }
   else
   {
    cout<<"Enter digit is wrong"<<endl;
   }
}

