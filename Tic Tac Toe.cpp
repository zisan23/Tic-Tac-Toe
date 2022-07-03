#include <bits/stdc++.h>
using namespace std;

char box[10] = {'o', '1','2','3','4','5','6','7','8','9'};
int checkwin();
void drawboard();

int main(){
    system("color Cf");
    int player = 1, i, choice;
    char sign;

    do{
        drawboard();
        player = (player % 2) ? 1 : 2;
        cout << "Player " << player <<  " Enter Position : ";
        cin >> choice;

        if(player == 1){
            sign = 'X';
        }
        else if(player == 2){
            sign = 'O';
        }

        if(choice == 1 && box[1] == '1'){
            box[1] = sign;
        }
        else if(choice == 2 && box[2] == '2'){
            box[2] = sign;
        }
        else if(choice == 3 && box[3] == '3'){
            box[3] = sign;
        }
        else if(choice == 4 && box[4] == '4'){
            box[4] = sign;
        }
        else if(choice == 5 && box[5] == '5'){
            box[5] = sign;
        }
        else if(choice == 6 && box[6] == '6'){
            box[6] = sign;
        }
        else if(choice == 7 && box[7] == '7'){
            box[7] = sign;
        }
        else if(choice == 8 && box[8] == '8'){
            box[8] = sign;
        }
        else if(choice == 9 && box[9] == '9'){
            box[9] = sign;
        }
        else{
            cout << "Invalid Option!!!";
            player--;
        }

        i = checkwin();
        player++;
    }while(i == -1);
    drawboard();
    if(i == 1){
        cout << "Player " << --player << " Won";
    }
    else{
        cout << "Draw";
    }
    return 0;
}
int checkwin(){
    if(box[1] == box[2] && box[2] == box[3]){
       return 1;
    }
    else if(box[4] == box[5] && box[5] == box[6]){
        return 1;
    }
    else if(box[7] == box[8] && box[8] == box[9]){
        return 1;
    }
    else if(box[1] == box[4] && box[4] == box[7]){
        return 1;
    }
    else if(box[2] == box[5] && box[5] == box[8]){
        return 1;
    }
    else if(box[3] == box[6] && box[6] == box[9]){
        return 1;
    }
    else if(box[1] == box[5] && box[5] == box[9]){
        return 1;
    }
    else if(box[7] == box[5] && box[5] == box[3]){
        return 1;
    }
    else if(box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9'){
            return 0;
    }
    else{
        return -1;
    }
}

void drawboard(){
    system("cls");
    cout << endl << endl << "Tic Tac Toe" << endl << endl;
    cout << "Player 1 (X) - Player 2 (O)" << endl << endl;

    cout << "   |   |   " << endl;
    cout << " " << box[1] << " | " << box[2] << " | " << box[3] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << box[4] << " | " << box[5] << " | " << box[6] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << box[7] << " | " << box[8] << " | " << box[9] << " " << endl;
    cout << "   |   |   " << endl;

    cout << endl << endl << endl << endl << "Made and Designed by Sirius Black : mstrmndzm_23" << endl << endl << endl;
}

