#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    // game loop
    while (1) {
        
        int max = 0 , index;

        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            
            if (max<mountain_h){
                max = mountain_h;
                index = i;
            }
        }
            
        cout << index << endl; // The index of the mountain to fire on.
    }
}
