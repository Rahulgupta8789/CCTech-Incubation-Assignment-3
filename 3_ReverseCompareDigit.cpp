/*
Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
Please note N can have maximum 5 digits. Print the numbers N and M. 
Compare N with M and print the result.

Hints => Input : N=1234              Output : M=4321, M is greater than N
*/

#include <iostream>

using namespace std;

int main()
{
    int N, reverse = 0, remainder;

    cout << "Enter the 5 number N = ";
    cin >> N;
    int y = N;

    if (N > 0 && N <= 99999)
    {
        cout << "Enter digit is wright" << endl;

        while (N != 0)
        {
            remainder = N % 10;
            reverse = reverse * 10 + remainder;
            N /= 10;
        }
        cout << "Reverse Number is = "<< reverse<<endl;
    }
    else
    {
        cout << "Enter digit is wrong" << endl;
    }

    int num1;
    int num2;
    num1 = y;
    num2 = reverse;

    if (!(num1 == num2))
    {
      cout << max(num1, num2) << " is greater";
    }  
    else
    {
       cout << "both are equal";
    }
       
    return 0;
}