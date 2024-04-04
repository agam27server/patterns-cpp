// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n ;
    cout << "enter number of rows : ";
    cin >> n;
    
    for (int row =0; row < n; row++){
        //upper part 
        // stars
        for (int col = 0; col < row +1; col++){
            cout << "*";
        }
        // spaces
        for (int  col = 0; col < n-(row); col++){
            cout << "  ";
        }
        // stars
        for (int col = 0; col < row +1; col++){
            cout << "*";
        }
        cout << "\n";
        
        
    }
    for (int row =0; row < n; row++){
        // lower part
        //stars
        for (int  col = 0; col < n-(row); col++){
            cout << "*";
        }
        // spaces
        for (int col = 0; col < row +1; col++){
            cout << "  ";
        }
        // stars
        for (int  col = 0; col < n-(row); col++){
            cout << "*";
        }
        
        cout << "\n";
    }
    //this is comment
    return 0;
}
