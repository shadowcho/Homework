/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hangman.cpp
 * Author: shadowcho
 *
 * Created on January 3, 2017, 8:21 PM
 */

#include <cstdlib>
#include <stdio.h>
#include "Hangman.h"
using namespace std;

/*
 * 
 */
struct Letter
{
    BYTE Uppercase;
    BYTE Lowercase;
    struct Letter *PreviousLetter;
    struct Letter *NextLetter; 
};

int main(int argc, char** argv) 
{
    printf("Niki");
    
    return 0;
}

