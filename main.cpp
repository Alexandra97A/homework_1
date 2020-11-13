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
    double max = arr[0];
    for (i=0; i < len; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        return minimum;
    }

    cout<<"Minimum of the array: "<<min;
    cout<<endl;
    cout<<"Maximum of the array: "<<max;
}

//Problem 3: Fibonacci
int fib(int x) {
    if ( (x == 1) || ( x==0 ) ) {
      return(x);
   } else {
      return(fib(x-1)+fib(x-2));
   }
}

//Problem 4: multiplication
void multiplication_table (int n_multiplication){
    for (int i=0; i<= 10; i++) {
        cout<< n_multiplication << " * "<< i <<" = "<<n_multiplication*i<<endl;
    }
}

//Problem 5: truth table for 3 variables
void truth_table_and(){
    int a;
    int b;
    int c;

    for(a=0;a<=1;++a){
     for(b=0;b<=1;++b){
      for(c=0;c<=1;++c){
          cout<<a<<" "<<b<<" "<<c<<" "<<a*b*c<<endl;
      }
     }
    }
}

void truth_table_or(){
    int a;
    int b;
    int c;

    for(a=0;a<=1;++a){
     for(b=0;b<=1;++b){
      for(c=0;c<=1;++c){
         if(a==0 && b==0 && c==0)
          cout<<a<<" "<<b<<" "<<c<<" "<<0<<endl;
         else
             cout<<a<<" "<<b<<" "<<c<<" "<<1<<endl;
      }
     }
    }
}
int main()
{
    cout << "Hello World!" << endl;
    double area_1 = area_circumference(10);
    double radius = 2;

    double arr[]={1,2,3,8,7};
    int len = sizeof(arr)/sizeof(arr[0]);

    int n_multiplication = 7;
    computea_area_and_circumference(radius);

    cout<<"Problem 2..................."<<endl;
    min_max_array(arr, len);
    cout<<endl;

    cout<<"Problem 3.................."<<endl;
    cout<<fib(9);

    cout<<"Problem 4.................."<<endl;
    multiplication_table (n_multiplication);

    cout<<"Problem 5.................."<<endl;
    cout<<"AND"<<endl;
    truth_table_and();

    cout<<endl<<"OR"<<endl;
    truth_table_or();
    return 0;
}
