/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kameryn Cambridge
 */
#include "std_lib_facilities.h"
#include <iostream>

int f(const int x){
    int z = x + 10;
    return z;
}

int f2(const int x){
    int y = x / 2;
    return y;
}

void f3(const int x){
    cout << x+5 << "\n";
}

int main(){
    const int x = 10;

    cout << f(x) << "\n";
    cout << f2(x) << "\n";
    f3(x);

    return 0;
}

/*Declaring a non reference function argument const is possible. Doing this means 
  the value of the argument can not be modified by the function and is read only. 
  This is useful because it can stop accidental changes in the object. It is not 
  used often because the argument will be passed by value anyway and it will not 
  change anything outside of the function. */
