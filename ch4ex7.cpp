/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Geena-Maria van Dijk
 */

#include "std_lib_facilities.h"

int main ()
{

    cout<< "Please enter two operands followed by an operation: "<<endl;

    string operation;
    int op1, op2, result;
    int flag = 1;

    cin>>op1>>op2>>operation;

    if ((op1 < -9 || op1 > 9)||(op2 < -9 || op2 > 9))
    {
        cout<< "Operands must be single digit"<< endl;
        flag = 0;
    }
    else if (operation == "+" || operation == "add")
        result = op1+op2;
    else if (operation == "-" || operation == "subtract")
        result = op1-op2;
    else if (operation == "*" || operation == "multiply")
        result = op1*op2;
    else if (operation == "/" || operation == "devide")
        result = op1/op2;
    else
    {
        cout<<"Invalid operation entered"<<endl;
        flag = 0;
    } 

    if (flag)
        cout << op1 << operation << op2 << " = " << result << endl;

    return 0;
}