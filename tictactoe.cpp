#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char matrix[3][3] = {'7','8','9','4','5','6','1','2','3'};
char player = 'X';
int countno;
void draw()
{
    system("cls");
    cout<<"\n\tTIC-TAC-TOE 1.0"<<endl;
    cout<<endl;
    cout<<"\t"<<"---------------"<<endl;
    cout<<"\t"<<"|  "<<matrix[0][0]<<" | "<<matrix[0][1]<<" | "<<matrix[0][2]<<"  |"<<endl;
    cout<<"\t"<<"|----+---+----|"<<endl;
    cout<<"\t"<<"|  "<<matrix[1][0]<<" | "<<matrix[1][1]<<" | "<<matrix[1][2]<<"  |"<<endl;
    cout<<"\t"<<"|----+---+----|"<<endl;
    cout<<"\t"<<"|  "<<matrix[2][0]<<" | "<<matrix[2][1]<<" | "<<matrix[2][2]<<"  |"<<endl;
    cout<<"\t"<<"---------------"<<endl;
}
void input()
{
    int a;
    cout<<"\n\n\t-It's "<<player<<" turn. "<<"Press the number of the field: ";
    cin>>a;
    if(a == 1)
    {
        if(matrix[2][0] == '1')
            matrix[2][0] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 2)
    {
        if(matrix[2][1] == '2')
            matrix[2][1] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 3)
    {
        if(matrix[2][2] == '3')
            matrix[2][2] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 4)
    {
        if(matrix[1][0] == '4')
            matrix[1][0] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 5)
    {
        if(matrix[1][1] == '5')
            matrix[1][1] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 6)
    {
        if(matrix[1][2] == '6')
            matrix[1][2] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 7)
    {
        if(matrix[0][0] == '7')
            matrix[0][0] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 8)
    {
        if(matrix[0][1] == '8')
            matrix[0][1] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
    else if(a == 9)
    {
        if(matrix[0][2] == '9')
            matrix[0][2] = player;
        else
        {
            cout<<"\t-Already taken. Try another field."<<endl;
            input();
        }
    }
}
void toggleplayer()
{
    if(player == 'X')
        player = 'O';
    else
        player = 'X';
}
char ifwon()
{
    //for X
    //rows
    if(matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if(matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if(matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    //columns
    if(matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if(matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if(matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
    //diagonals
    if(matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if(matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    //for O
    //rows
    if(matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if(matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if(matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    //columns
    if(matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if(matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if(matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
    //diagonals
    if(matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if(matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';

    //none
    return '/';

}
int main()
{
    countno = 0;
    Beep(300,500);
    draw();
    cout<<"\n\tGUIDELINES: "<<endl;
    cout<<"\t-The object of Tic Tac Toe is to get three in a row"<<endl;
    cout<<"\t-The first player is known as X and the second is O"<<endl;
    cout<<"\t-Players alternate placing Xs and Os on the game board\n\t  until either oppent has three in a row or all nine\n\t  squares are filled"<<endl;
    cout<<"\t-X always goes first, and in the event that no one has\n\t  three in a row, the stalemate is called a cat game"<<endl;
    cout<<"\n\t-Player 1(X) will start: "<<endl;

    while(1)
    {
        countno++;
        input();
        draw();
        if(ifwon() == 'X')
        {
            cout<<"\n\n\t-PLAYER 1(X) WON!!"<<endl;
            cout<<'\a';
            break;
        }
        else
            if(ifwon() == 'O')
        {
            cout<<"\n\n\t-PLAYER 2(O) WON!!"<<endl;
            cout<<'\a';
            break;
        }
        else
            if(ifwon() == '/' && countno == 9)
        {
            cout<<"\n\n\t-CAT GAME!"<<endl;
            cout<<'\a';
            break;
        }
        toggleplayer();
    }
    return 0;
}
