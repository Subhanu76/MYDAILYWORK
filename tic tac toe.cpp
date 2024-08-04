#include<iostream>
using namespace std;

int main(){
    const int size = 3;
    char board[size][size] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char player = 'x';
    bool game = false;

    while(true){
        int i, j;
        for(i = 0; i < size; i++){ // board
            for(j = 0; j < size; j++){
                cout << board[i][j];
                if(j < size - 1){
                    cout << "|";
                }
            }
            cout << endl;
            if(i < size - 1){
                cout << "-----" << endl;
            }
        }

        int row, col;
        while(true){ // player move
            cout << "Player " << player << ", enter row (0-2) and column (0-2): ";
            cin >> row >> col;
            if(row >= 0 && row < size && col >= 0 && col < size && board[row][col] == ' '){
                board[row][col] = player;
                break;
            } else {
                cout << "Invalid move. Try again." << endl;
            }
        }

        game = false;
        for(i = 0; i < size; i++){ // check rows
            if(board[i][0] == player && board[i][1] == player && board[i][2] == player){
                game = true;
                break;
            }
        }
        for(j = 0; j < size && !game; j++){ // check columns
            if(board[0][j] == player && board[1][j] == player && board[2][j] == player){
                game = true;
                break;
            }
        }
        if(!game){ // check diagonals
            if(board[0][0] == player && board[1][1] == player && board[2][2] == player){
                game = true;
            }
            if(board[0][2] == player && board[1][1] == player && board[2][0] == player){
                game = true;
            }
        }

        bool draw = true;
        if(!game){
            for(i = 0; i < size; i++){
                for(j = 0; j < size; j++){
                    if(board[i][j] == ' '){
                        draw = false;
                        break;
                    }
                }
                if(!draw){
                    break;
                }
            }
        }

        if(game){
            cout << "Player " << player << " wins!" << endl;
            break;
        } else if(draw){
            cout << "The match is a draw!" << endl;
            break;
        }

        player = (player == 'x') ? 'o' : 'x';
    }

    char again;
    cout << "Do you want to play again? (y/n): ";
    cin >> again;
    if(again == 'y' || again == 'Y'){
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                board[i][j] = ' ';
            }
        }
        main(); // This is not a good practice, consider using a loop instead
    }

    return 0;
}
