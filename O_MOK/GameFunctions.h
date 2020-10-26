//
//  GameFunctions.h
//  O_MOK
//
//  Created by leeHyunGeun on 2020/10/15.
//

#ifndef GameFunctions_h
#define GameFunctions_h
#include <iostream>
#include <vector>
#include <curses.h>
#include <string.h>

std::vector< std::vector <char> > board;

void fill(int r, int c){ board.assign( r, std::vector <char> (c, '-') ); }

void Draw(){
    
    system("clear");
    for(int i = 0; i < board.size(); i ++){
        for(int j = 0; j < board[i].size(); j++){
            std::cout << board[i][j]<< " ";
        }
        std::cout << std::endl;
    }
}

void chaksu(char& p){
    int r, c;
    while(1){
        std::cout<< "It's " << p << " turn, " << "Where? "<< " ";
        std::cin >> r >> c;
        if(r > board.size() || c > board[0].size()){
            std::cout << "ERROR: TRY AGAIN" << std::endl;
        }
        else if(board[r - 1][c - 1] == 'O' || board[r - 1][c - 1] == 'X'){
            std::cout << "Already taken!! TRY AGAIN" << std::endl;
        }
        else if(r == board.size() && c == board[0].size()){
            exit(0);
        }
        else if(r < board.size() && c < board[0].size()){
            board[r-1][c-1] = p;
            break;
        }
    }
}

void TogglePlayer(char& p){
    p == 'O' ? p = 'X' : p ='O';
}


#endif /* GameFunctions_h */
