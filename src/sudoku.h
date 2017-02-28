#include<iostream>

using namespace std;
//Cell class: One sudoku table contains 9 cells
//Facts:
//- 3x3
//- contains numbers through 1-9
//- Sum of all numbers in it is 45
class Cell{
    public:
        //Generation
        Cell();
        void generate();
        //Grid
        void setGrid(int params[3][3]);
        void printGrid();
        //Tools
        bool hasNum(int y);
        void printRow(int num);
        void SetZero();
        bool checkList(int n);
        void removeFromList();
        //The grid 
        int grid[3][3];
    private:
        int whitelist[9] = {1,2,3,4,5,6,7,8,9};
};
class SudokuTable{
    public:
        SudokuTable();
        void printTable();
        void generateWhole();
    private:
		bool checkColumn(int columnNum, int num);
		bool checkRow(int rowNum, int num);
      	Cell tableGrid[3][3]; 
};


