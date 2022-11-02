/*
Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.

Hints => Input : N=12345              Output : sum of first and fifth digit=1+5=6
*/

#include<iostream>

using namespace std;

int main() 
{
   int N, first_digit, fifth_digit;
   int sum = 0;
   
   cout << "Enter the 5 number N = ";
   cin >> N;

   if (N > 0 && N <= 99999 )
   {
     cout<<"Enter digit is wright"<<endl;
      
      first_digit = N / 10000;
      fifth_digit = N % 10;
      
      cout<<"The First digit of given Number is : "<<first_digit <<endl;
      cout<<"The Fifth digit of given Number is : "<<fifth_digit <<endl;

      int sum = first_digit + fifth_digit;

   cout << "Sum of First digit & Fifth digit = "<< sum <<endl;
   }
   else
   {
    cout<<"Enter digit is wrong"<<endl;
   }
}

