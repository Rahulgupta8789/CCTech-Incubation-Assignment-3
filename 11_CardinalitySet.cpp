/*
Write a program to accept cardinality of set A as N, and cardinality of set B as M. Then accept elements of set A and set B. 
Generate set C which is union of set A and set B, set D which is intersection set of set A and Set B. 
Print set A, B, C, D, Cardinality of set C, Cardinality of set D.
*/

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void printSet(set<int> s)
{
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); ++itr)
    {
        cout << *itr << " ";
    } 
}

int main()
{
    int num1, num2;
    int n1, n2;

    set<int> setA;
    set<int> setB; 
    set<int> setC; 
    set<int> setD;

    cout << "Enter size of set A : ";
    cin >> num1;

    cout << "Enter size of set B : ";
    cin >> num2;

    cout << "Enter the Integers in set A : ";
    for (int i = 0; i < num1; i++)
    {
        cin >> n1;
        setA.insert(n1);
    }

    cout << "Enter the Integers in set B : ";
    for (int i = 0; i < num2; i++)
    {
        cin >> n2;
        setB.insert(n2);
    }
   
    cout << "Set C = Union of set A and B : ";
    set_union(setA.begin(),setA.end(),setB.begin(),setB.end(),inserter(setC,setC.begin()));
    printSet(setC);

    vector<int> vect;
    vector<int> :: iterator ls,v_itr;

    cout << "\nSet D = Intersection of set A and B : ";
    set_intersection(setA.begin(),setA.end(),setB.begin(),setB.end(),inserter(setD,setD.begin()));
    printSet(setD);

    cout<<"\n\n=========== Print SetA, SetB, SetC, SetD, Cardinality of Set C & Cardinality of Set D ===========";
    cout << "\nSet A : ";
    printSet(setA);
    cout << "\nSet B : ";
    printSet(setB);

    cout << "\nCardinality of Set C : ";
    set_union(setA.begin(),setA.end(),setB.begin(),setB.end(),inserter(setC,setC.begin()));
    printSet(setC);

    cout << "\nCardinality of Set D : ";
    set_intersection(setA.begin(),setA.end(),setB.begin(),setB.end(),inserter(setD,setD.begin()));
    printSet(setD);

    return 0;
}
