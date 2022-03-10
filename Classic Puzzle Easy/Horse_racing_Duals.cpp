#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n ,temp;
    cin >> n; cin.ignore();
    vector<int> pi;
    for (int i = 0; i < n; i++) {
        cin >> temp; 
        cin.ignore();
        pi.push_back(temp);
    }
    
    sort(pi.begin() , pi.end());

    int min = pi[1] - pi[0];
    for(int i = 1 ; i<n-1 ; i++){
        
        if(pi[i+1] - pi[i] < min){
            min = pi[i+1] - pi[i];
        }
    }

    cout<<min<<endl;
}
