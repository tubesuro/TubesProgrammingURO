#include <iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#include<cmath>
using namespace std;

void map_update(char A[11][11]){
    for (int i = 0; i <= 10; i++) {
      for (int j = 0; j <= 10; j++) {
          printf("%c ", A[i][j]);
      }
      printf("\n");
    }
}


int main()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to RoboWars~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "In this game, you've to control a robot and kill as many cockroaches as possible" << endl;
    cout << "Are you ready to play this games? " << endl;
    cout << "Let's Started !!! " << endl;
    cout << "Conditions: " << endl;
    cout << "1. The Robot can only move forward, backward, left, and right." << endl;
    cout << "2. The Robot can attack the enemies" << endl;
    cout << "3. The enemies also can attack the robot" << endl;
    cout << "4. The enemies cannot move" << endl;
    cout << endl;
    cout << "MAP STATUS" << endl;
   
    /*Declare Variables*/
   
    // Map Variables
    int N = 10;
    char A[11][11];
    int musuh = 1, xo = 1, yo = 1;
    int xrobot, yrobot;
   
    /**/

   
    // Variabel Status Kecoa
    int hpkecoa = 50, attackdamagekecoa = 5;
   
    // Variabel Lokasi Kecoa
    int xkecoa ;
    int ykecoa ;
   
    // Variabel Status Robot
    int hprobot = 250, attackdamagerobot = 5;
   
    // Data
    int killcount = 0, getdistance = 0;
   
    //selection
    int selection;
   
    // Yeah, i know it isn't fair
    srand((unsigned)time(0));
    xkecoa=(rand() % 10) + 1; //random x 1-10
    ykecoa=(rand() % 10) + 1; //random x 1-10
    /*Map*/
   
    cout << xkecoa << endl;
    //set semua titik
    for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      A[i][j] = '.';
    }
    }
   
    //inisiasi yg abnormal
    A[0][0] = ' ';
    A[yo][xo] = 'R'; /* R = robot */
    A[ykecoa][xkecoa] = 'K';
    for (int i = 1; i <= N; i++){
    A[0][i] = i - 1 + '0';
    }
    for (int i = 1; i <= N; i++){
    A[i][0] = i - 1 + '0';
    }
   
    for (int i = 0; i <= N; i++) {
      for (int j = 0; j <= N; j++) {
          printf("%c ", A[i][j]);
      }
      printf("\n");
    }
   
    while (selection != 7){
        cout << " On this map you can see the position of the robot and the cockroaches " << endl;
        // Check Status
        cout << "~~~~~~~~~~ STATUS ROBOT ~~~~~~~~~~" << endl;
        cout << "HP Robot : " << hprobot << endl;
        cout << "Attack Robot : " << attackdamagerobot << endl;
        cout << endl;
        cout << "~~~~~~~~~~ STATUS KECOA ~~~~~~~~~~" << endl;
        cout << "HP Kecoa : " << hpkecoa << endl;
        cout << "Attack Kecoa : " << attackdamagekecoa << endl;  
       
        // Command
        cout << "Command for the robot" << endl;
        cout << "1. Go Forward" << endl;
        cout << "2. Go Backward" << endl;
        cout << "3. Go Right" << endl;
        cout << "4. Go Left" << endl;
        cout << "5. Attack" << endl;
        cout << "6. Surrender" << endl;
        cout << endl;
        cout << "Choose command : " << endl;
        cin >> selection;
       
        // Choose a number between 1 to 6
        switch(selection)
        {
           
            case 1 :{
                getdistance = sqrt((pow((xo-xkecoa),2)) + (pow((yo-ykecoa),2)));
                if ((yo-1 == 0) || ((yo == ykecoa) && (xo == xkecoa))) {
                    cout << "Robot can't move forward" << endl;
                    cout << "Choose another command: " << endl;
                    map_update(A);
                }
                else{
                    A[yo][xo] = '.';
                    yo -= 1;
                    A[yo][xo] = 'R';
                    cout << "Current robot-position: " << "(" << yo-1 << "," << xo-1 << ")" << endl;
                    cout << "Distance: " << getdistance << endl;
                    cout << "Map Updated" << endl;
                    map_update(A);
                }
                break;
            }
           
            case 2 :{
                getdistance = sqrt((pow((xo-xkecoa),2)) + (pow((yo-ykecoa),2)));
                if ((yo + 1 == 12) || ((yo == ykecoa) && (xo == xkecoa))) {
                    cout << "Robot can't move backward" << endl;
                    cout << "Choose another command: " << endl;
                    map_update(A);
                }
                else{
                    A[yo][xo] = '.';
                    yo += 1;
                    A[yo][xo] = 'R';
                    cout << "Current robot-postion: " << "(" << yo-1 << "," << xo-1 << ")" << endl;
                    cout << "Distance: " << getdistance << endl;
                    cout << "Map Updated" << endl;
                    map_update(A);
                }
                break;
            }
           
            case 3 :{
                getdistance = sqrt((pow((xo-xkecoa),2)) + (pow((yo-ykecoa),2)));
                if ((xo + 1 == 11) || ((xo == xkecoa) && (yo == ykecoa))){
                    cout << "Robot can't move to the right" << endl;
                    cout << "Choose another command: " << endl;
                    map_update(A);
                }
                else{
                    A[yo][xo] = '.';
                    xo += 1;
                    A[yo][xo] = 'R';
                    cout << "Current robot-postion: " << "(" << yo-1 << "," << xo-1 << ")" << endl;
                    cout << "Distance: " << getdistance << endl;
                    cout << "Map Updated" << endl;
                    map_update(A);
                }
                break;
            }
           
            case 4 :{
                getdistance = sqrt((pow((xo-xkecoa),2)) + (pow((yo-ykecoa),2)));
                if ((xo - 1 == 0) || ((xo == xkecoa) && (yo == ykecoa))) {
                    cout << "Robot can't move to the left" << endl;
                    cout << "Choose another command: " << endl;
                    map_update(A);
                }
                else {
                    A[yo][xo] = '.';
                    xo-=1;
                    A[yo][xo] = 'R';
                    cout << "Current robot-postion: " << "(" << yo-1 << "," << xo-1 << ")" << endl;
                    cout << "Distance: " << getdistance << endl;
                    cout << "Map Updated" << endl;
                    map_update(A);
                }
                break;
            }
           
            case 5 :{
                getdistance = sqrt((pow((xo-xkecoa),2)) + (pow((yo-ykecoa),2)));
                if (getdistance > 1) {
                    cout << "The distance between the robot and the cockroach is too far" << endl;
                    cout << "Robot can't attack the cockrach" << endl;
                    getdistance = sqrt((pow((xo-xkecoa),2)) + (pow((yo-ykecoa),2)));
                    cout << "Choose another command: " << endl;
                    map_update(A);
                   
                }
                else {
                    cout << "Robot is attacking the cockroach" << endl;
                    hpkecoa -= 5 ;
                    hprobot -= 5 ;
                    cout << "~~~~~~~~~~ STATUS ROBOT ~~~~~~~~~~" << endl;
                    cout << "HP Robot : " << hprobot << endl;
                    cout << "Attack Robot : " << attackdamagerobot << endl;
                    cout << endl;
                    cout << "~~~~~~~~~~ STATUS KECOA ~~~~~~~~~~" << endl;
                    cout << "HP Kecoa : " << hpkecoa << endl;
                    cout << "Attack Kecoa : " << attackdamagekecoa << endl;
                    cout << "Distance: " << getdistance << endl;
                    A[ykecoa][xkecoa] = '.';
                    srand((unsigned)time(0));
                    xkecoa=(rand() % 10)+1;
                    ykecoa=(rand() % 10)+1;
                    A[ykecoa][xkecoa] = 'K';
                    cout << "Map Updated" << endl;
                    map_update(A);
                    if (hpkecoa == 0){
                        cout << "Kecoa has been killed by robot!!!";
                        killcount += 1;
                        cout << "Jumlah kill: " << killcount << endl;
                        srand((unsigned)time(0));
                        xkecoa=(rand() % 10)+1;
                        ykecoa=(rand() % 10)+1;
                        A[ykecoa][xkecoa] = 'K';
                        cout << "Map Updated" << endl;
                        map_update(A);
                    }
                    else if (hprobot == 0){
                        cout << "Robot has been killed by the cockroach!!!" << endl;
                        cout << "Jumlah kill: " << killcount << endl;
                        cout << "GAME OVER!!!" << endl;
                        selection = 7;
                       
                    }
                }
                break;
            }
           
            case 6:{
                cout << "KAMU NOOB!!!" << endl;
                cout << "Jumlah kill: " << killcount << endl;
                selection = 7;
                break;
            }
        };
    }
}