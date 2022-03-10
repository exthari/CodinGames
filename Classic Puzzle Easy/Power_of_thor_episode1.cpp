#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    string Distx="",Disty="";
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        Distx = "";
        Disty = "";

        if (initial_tx < light_x){
            initial_tx++;
            Distx = 'E';
        }

        else if (initial_tx > light_x){
            initial_tx--;
            Distx = 'W';
        }

        if (initial_ty > light_y){
            initial_ty--;
            Disty = 'N';
        }

        else if (initial_ty < light_y){
            initial_ty++;
            Disty = 'S';
        }
        
        cout << Disty << Distx <<endl;
    }
}
