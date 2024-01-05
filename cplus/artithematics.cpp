#include<iostream>

int main()
{
    //arithemetic operators = Return to the result of specific arithmetic operation (+,/,*,-)
    // parenthesics, multiply, division, addition, sub

    int demo_bocket = 6-5+4*3/2;

    std::cout << "demo bocket methods:" << demo_bocket << '\n';

    int students = 28;
    float remainder;    

    //students = students + 1 ;
    //students +=1;
    //students++;

    //students = students - 2;
    //students -= 1;
    //students--;

    //students = students * 2;
    //students *= 2;

    //students = students /2 ;
    students /= 2;

    remainder = 28%3;

    std::cout << students << '\n';
    std::cout << "Remainder: " << remainder << '\n';


    return 0;

}