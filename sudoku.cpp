#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "sudoku.h"

using namespace std;

//Constants
const int numbers[9] = {1,2,3,4,5,6,7,8,9};

//Cell
Cell::Cell(){
    //this->generate();
}
void Cell::setGrid(int params[3][3]){
     for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            this->grid[i][x] = params[i][x];       
        }
    }
}
void Cell::printGrid(){
    cout << "--------" << endl; 
    for(int i = 0; i < 3; i++){
        cout << "|";
        for(int x = 0; x < 3; x++){
            cout << this->grid[i][x] << " ";
        }
        cout << "|" << endl;
    }
    cout << "--------"; 
}
void Cell::printRow(int num){
    num = num - 1;
    for(int v = 0; v<3; v++)
        cout << this->grid[num][v] << " ";
}
bool Cell::hasNum(int y){
     for(int k = 0; k < 3; k++){
        for(int l = 0; l < 3; l++){
            if(this->grid[k][l] == y)
                return true;
        }
    }
    return false;
}
void Cell::generate(){
   this->SetZero();
    int Row, Column, c = 0;
    
    for(int z = 1; z < 10; z++){
        while(true){
            Row = rand() % 3;
            Column = rand() % 3;
            cout << "R: " << Row <<" C: " << Column << " Z: " << z << endl;
            if(this->grid[Row][Column] == 0){
                this->grid[Row][Column] = z;
                break;
            }
        }
    }
}
void Cell::SetZero(){
     for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++)
            this->grid[i][x] = 0;
    }
    
}
bool Cell::checkList(int n){
    for(int c = 0; c < 9; c++){
        if(this->whitelist[c] == n){
            this->whitelist[c] == 0;
            return true;
        }
    }
    return false;
}
//SudokuTable
SudokuTable::SudokuTable(){
       
} 
void SudokuTable::printTable(){
    for(int i = 0; i < 3; i++){
        cout << "-----------------------------" << endl;
        for(int x = 0; x < 3; x++){
            
            cout << " | ";
            this->tableGrid[i][x].printRow(1);
            cout << " | ";
            this->tableGrid[i][x].printRow(2);
            cout << " | ";
            this->tableGrid[i][x].printRow(3);
            cout << " | ";
            cout << endl;
        }    
    }
    cout << "-----------------------------" << endl;
  
}

void SudokuTable::generateWhole(){
    for(int p = 0; p < 3; p++){
        for(int o = 0; o < 3; o++){
            this->tableGrid[p][o].SetZero();
        }    
    }
/*    int h, column, q = 0;
    for(int i = 0; i < 3; i++){
        h = floor(i/3);
        cout << i << endl;
        for(int g = 0; g < 9; g++){
            for(int y = 0; y < 10; y++){
                column = rand() % 9;
                q = floor(column/3);
                cout << column << endl;
                if((this->tableGrid[h][q].grid[h][column] == 0 ) && (this->tableGrid[i][q].checkList(g))){
                    this->tableGrid[h][q].grid[h][column] = g+1;
                }
            }
        }
    }
*/
}
