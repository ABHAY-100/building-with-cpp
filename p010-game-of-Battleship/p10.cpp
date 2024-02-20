#include <iostream>
using namespace std;
int main(){
    cout<<"---Game Of BattleShip---\n\n";
    bool cheat[4][4] = {
        {1, 0, 0, 1},
        {0, 1, 0, 1},
        {0, 1, 0, 0},
        {0, 0, 1, 1}
    };
    int hits = 0, no_Turns = 0;
    while(hits<5){
        int x, y;
        cout<<"Enter the x-coordinate: ";
        cin>>x;
        cout<<"Enter the y coordinate: ";
        cin>>y;
        if(cheat[x][y]){
            hits++;
            cheat[x][y]=0;
            cout<<"\nThat's a Hit!\t";
            if(hits<5){
                cout<<(5-hits)<<" more to win\n\n";
            }
        }
        else{
            cout<<"Miss! Try Again\n\n";
        }
        no_Turns++;
    }
    cout<<"\n\nVictory!!\n";
    cout<<"You Worn in "<<no_Turns<<" turns"<<endl;
    return 0;
}