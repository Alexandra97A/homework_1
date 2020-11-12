#include <iostream>

using namespace std;

//Problem 1: Write a program which allows to compute
//Area and circumference of a circle. (Input of the function : circumference)
double area_circumference (double circumference){
    double radius = circumference/2/3.14;
    cout<<"from the circumference "<<circumference<<" we deduce the radius "<<radius;

    double area = 3.14*radius*radius;

    return area;
}

void computea_area_and_circumference (double radius) {
    double area;
    double circumference;

    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;

    cout<<"Radius of the circle: "<<radius<<endl;
    cout<<"Area of the circle: "<<area<<endl;
    cout<<"Circumference of the circle: "<<circumference<<endl;
}

/*Problem 2: Write a function which allows to find the max and the min of a table.
*/

/*
void min_max_array(double *arr){

        // returns the minimum value of array

        size_t i;
        double minimum = arr[0];
        for (i = 1; i < length; ++i) {
            if (minimum > arr[i]) {
                minimum = arr[i];
            }
        }
        return minimum;

} */
int main()
{
    cout << "Hello World!" << endl;
    double area_1 = area_circumference(10);

    double radius = 2;
    computea_area_and_circumference(radius);

    cout<<"Problem 2..................."<<endl;


    return 0;
}
