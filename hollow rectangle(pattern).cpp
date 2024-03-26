#include<iostream>

using namespace std;

int main(){
    for(int row = 0; row < 3; row++){
        if(row == 0 || row == 2){
            for (int col1 = 0; col1 < 5; col1++){
                cout << "* ";
            }
            cout << endl;
        }
        else{
            for (int col2 = 0; col2 < 5; col2++){
                if(col2 == 0 || col2 == 4){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}