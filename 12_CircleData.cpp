/*
Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle. 
Select appropriate data structure and explain why you chose it. Arrange the circles in increasing order of their area 
and print all the data of each circle.
*/

#include <iostream>
#include <map>

using namespace std;

class circle
{
    double x_Axis, y_Axis, radius, area;

public:
    circle(double x, double y, double r)
    {
        this->x_Axis = x, this->y_Axis = y,this->radius = r ;
        this->area = 3.14 * r * r;  // calculate area of circle
    }
    double getx()
    {
        return x_Axis;
    }
    double gety()
    {
        return y_Axis;
    }
    double getradius()
    {
        return radius;
    }
    double getarea()
    {
        return area;
    } 
};

// display detail of each circle
void display(map<double, circle> m)
{
    map<double, circle>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout <<"========================================================="<<endl;
        cout <<"Point x = "<< itr->second.getx() << " "<<endl;
        cout <<"Point y = "<< itr->second.gety() << " "<<endl;
        cout <<"Radius of circle : "<< itr->second.getradius() << " "<<endl;
        cout <<"Area of circle : " << itr->first << " "<<endl;
        cout <<"========================================================="<<endl;
    }
}

int main()
{
    map<double, circle> data;

    int num;
    double r, x, y; 

    // take user input for each circle
    cout << "Enter total number of circle : " ;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout <<"---------------------------------------------------------"<<endl;
        cout <<"Circle-"<<i<<endl;
        cout << "Enter radius of  circle"<< i << " : " ;
        cin >> r;
        cout << "Enter X-Axis co-ordinate for centre : ";
        cin >> x;
        cout << "Enter Y-Axis co-ordinate for centre : ";
        cin >> y;
        circle c(x, y, r);
        data.insert({c.getarea(), c});      // insert record into map
    }

    display(data);

    return 0;
}
