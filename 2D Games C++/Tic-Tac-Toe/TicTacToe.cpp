//
//  TicTacToe.cpp
//  
//
//  Created by Vikram Bisht on 10/30/20.
//

#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

enum Turn {playerOne = 1, playerTwo = 2};

class GameManager {
  
public:
  Turn turn;
  int grid[3][3];
  bool hasGameEnded;
  void changeTurn();
  Turn getTurn();
  void initializeGrid();
  void printGrid();
  bool hasWon(int row, int column);
  bool gridHasSpace();
  bool isValidLocation(int row, int column);
};

void GameManager::initializeGrid(){
  for(int i =0 ; i <3; i++){
    for (int j  = 0; j <3 ; j++){
      grid[i][j] = 0;
    }
  }
}
void GameManager::printGrid(){
  for(int i =0; i <3; i++){
    for (int j  = 0; j <3 ; j++){
      cout<<grid[i][j]<<'\t';
    }
    cout<<'\n';
  }
}
bool GameManager::gridHasSpace(){
  bool answer  = false;
  for(int i =0; i <3; i++){
    for (int j  = 0; j <3 ; j++){
      if (grid[i][j]==0) return true;
    }
  }
  return false;
}

bool GameManager::isValidLocation(int row, int column){
  if (row < 0 || row >=3  || column >=3 || column < 0){
    printf("Enter a valid location \n");
    return false;
  }
  if(grid[row][column] != 0){
    printf("already occupied position \n");
    return false;
  }
  return true;
}
void GameManager::changeTurn(){
  if(turn == playerOne){
    turn = playerTwo;
  }else{
    turn  = playerOne;
  }
}



bool GameManager::hasWon(int row, int column){
  if( (row == 0 || row == 2) && (column == 0  || column == 2) ){
    //on the edge of the grid
  }else{
    if( ((grid[row-1][column] == turn) && (grid[row+1][column] == turn)) || ((grid[row][column-1] == turn) && (grid[row][column+1] == turn)) || ((grid[row-1][column-1] == turn) && (grid[row+1][column+1] == turn)) || ((grid[row-1][column+1] == turn) && (grid[row+1][column-1] == turn)) ) {
      hasGameEnded = true;
      return true;
    }
  }
  if( (row-2>=0) && ((grid[row-1][column] == turn) && (grid[row-2][column] == turn) ) ){
    hasGameEnded = true;
    return true;
  }
  if( (row+2<2) && ((grid[row+1][column] == turn) && (grid[row+2][column] == turn) ) ){
    hasGameEnded = true;
    return true;
  }
  if( (column+2<2) && ((grid[row][column+1] == turn) && (grid[row][column+2] == turn) ) ){
    hasGameEnded = true;
    return true;
  }
  if( (column-2>=0) && ((grid[row][column-1] == turn) && (grid[row][column-2] == turn) ) ){
    hasGameEnded = true;
    return true;
  }
  if( (column+2<2 && row+2<2) && ((grid[row+1][column+1] == turn) && (grid[row+2][column+2] == turn) ) ){
    hasGameEnded = true;
    return true;
  }
  if( (column-2>=02 && row+2<2) && ((grid[row+1][column-1] == turn) && (grid[row+2][column-2] == turn) ) ) {
    hasGameEnded = true;
    return true;
  }
  if( (column+2<2 && row-2>=0) && ((grid[row-1][column+1] == turn) && (grid[row-2][column+2] == turn) ) ) {
    hasGameEnded = true;
    return true;
  }
  if( (column-2>=0 && row-2>=0) && ((grid[row-1][column-1] == turn) && (grid[row-2][column-2] == turn) ) ) {
    hasGameEnded = true;
    return true;
  }
  return false;
  
}

int main(){
  
  GameManager* manager  = new GameManager;
  //welcome the player and print the grid
  cout<<"Welcome Players"<<'\n';
  cout<<"This is Tic Tac Toe"<<'\n';
  cout<<"1 sybolyze the mark for first Player"<<'\n';
  cout<<"2 symbolize the mark for 2nd player"<<'\n';
  cout<<"This is how the grid looks in the begining"<<'\n';
  manager->initializeGrid();
  manager->printGrid();
  manager->turn  = playerOne;
  manager->hasGameEnded = false;
  cout<<"Player One gets the first turn";
  //do this until the grid is full
  while ( manager->gridHasSpace() && !(manager->hasGameEnded) ) {
    // {
    //inform whose turn it is
    if( manager->turn == playerOne ){
      printf("Its the first players turn \n");
    }else{
      printf("Its the second players turn \n");
    }
    int row = 0;
    int column  = 0;
    //ask user for the location he wants to put his mark
    printf("Please enter row number followed by the column number you want to select \n");
    cin>>row;
    cin>>column;
    //if location not available tell the user to pick another spot untill it is a valid spot
    if ( !manager->isValidLocation(row,column) ){
      while(manager->isValidLocation(row,column)){
        printf("Please enter row number followed by the column number you want to select \n");
        cin>>row;
        cin>>column;
      }
    }
    //if location available mark the positiion
    if(manager->turn  == playerOne){
      manager->grid[row][column] = 1;
    }else{
      manager->grid[row][column] = 2;
    }
    //check if player has won
    if(manager->hasWon(row, column)){
      if (manager->turn == playerOne){
        printf("player one has won the game");
      }else{
        printf("player two has won the game");
      }
    }
    manager->printGrid();
    //change the turn to the other player
    manager->changeTurn();
    //do the saame stuff
    
    //}
  }
  
  cout<<"The game was a draw"<<endl;
  cout<<"Thanks for playing"<<endl;
  return 0;
}
