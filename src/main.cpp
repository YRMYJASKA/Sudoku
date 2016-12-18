#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "sudoku.h"
using namespace std;
//Constants
#define MAXVAL 45
const int numbers[9] = {1,2,3,4,5,6,7,8,9};
int testGrid[3][3] = {{1,2,3},{4,5,6},{7,8,9}};


int main(){
    srand(time(0));
    /*for(int i = 0; i <3; i++){
        for(int x = 0; x <3; x++)
            cout << testGrid[i][x] << " ";
    }*/
    cout << "my cell: " << endl;
    Cell myCell;
    myCell.generate(); 
    myCell.printGrid();
    cout << endl << endl;
    cout << "my table: " << endl;
    SudokuTable MyTable;
   /* for(int p = 0; p < 3; p++){
        for(int o = 0; o < 3; o++){
            MyTable.tableGrid[p][o].generate();
        }    
    }*/
/*    for(int i = 0; i < 3; i++){
        cout << "-----------------------------" << endl;
        for(int x = 0; x < 3; x++){
            
            cout << " | ";
            MyTable.tableGrid[i][x].printRow(1);
            cout << " | ";
            MyTable.tableGrid[i][x].printRow(2);
            cout << " | ";
            MyTable.tableGrid[i][x].printRow(3);
            cout << " | ";
            cout << endl;
        }    
    }
    cout << "-----------------------------" << endl;
  */
   MyTable.generateWhole();
   MyTable.printTable();
    return 0;
}
