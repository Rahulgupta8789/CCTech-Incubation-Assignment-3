/*
Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
Please note N can have maximum 5 digits.

Hints => Input : N=123              Output : M=321
*/

#include<iostream>

using namespace std;

int main() 
{
   int N, reverse = 0, remainder;
   
   cout << "Enter the 5 number N = ";
   cin >> N;

   if (N > 0 && N <= 99999 )
   {
     cout<<"Enter digit is wright"<<endl;

      while (N != 0) 
      {
        remainder = N % 10;
        reverse = reverse * 10 + remainder;
        N /= 10;
      }
    cout << "Reverse Number is = "<< reverse;
   }
   else
   {
    cout<<"Enter digit is wrong"<<endl;
   }  
}
