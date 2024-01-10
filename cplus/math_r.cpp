#include<iostream>
#include<cmath>

int main()

{

double x = 3;
double y = 4;
double z;
double p;

z = std::max(x,y);
double z_m = std::min(x,y);
p = pow(2,4);
double s = sqrt(9);
double absolute = abs(-3);
//z =round(x);
//z= ceil(x);
//z=floor(x);


std::cout<< z << '\n';
std::cout<< z_m << '\n';
std::cout<<p<< '\n';
std::cout<< s << '\n';
std::cout<< absolute << '\n';





return 0;

}