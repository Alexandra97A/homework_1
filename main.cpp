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

void min_max_array(double *arr, int len){
    int  i;
    double min = arr[0];
    for (i=0; i < len; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

        size_t i;
        double minimum = arr[0];
        for (i = 1; i < length; ++i) {
            if (minimum > arr[i]) {
                minimum = arr[i];
            }
        }
        return minimum;

//Problem 3: Fibonacci
int fib(int x) {
    if ( (x == 1) || ( x==0 ) ) {
      return(x);
   } else {
      return(fib(x-1)+fib(x-2));
   }
}
int main()
{
    cout << "Hello World!" << endl;
    double area_1 = area_circumference(10);

    double radius = 2;
    computea_area_and_circumference(radius);

    cout<<"Problem 2..................."<<endl;

    double arr[]={1,2,3,8,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    min_max_array(arr, len);
    cout<<endl;

    cout<<"Problem 3.................."<<endl;
    cout<<fib(9);

     cout<<"Problem 4.................."<<endl;
    return 0;
}
