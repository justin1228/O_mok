//
//  main.cpp
//  O_MOK
//
//  Created by leeHyunGeun on 2020/10/14.
//
#include <iostream>
#include <vector>
#include <curses.h>
#include "GameFunctions.h"

int main(){
    fill(15, 15);
    char player = 'O';
    while(1){
        Draw();
        chaksu(player);
        TogglePlayer(player);
    }
}

