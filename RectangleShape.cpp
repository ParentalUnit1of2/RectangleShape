#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    // make a rectangle with height, width, and symbol entered by user
 
    int height, width;
    cout << "Let's make a triangle!\nPlease enter a height: ";
    cin >> height;
    cout << "Please enter a width: ";
    cin >> width;
    char symbol;
    cout << "What symbol do you want the symbol made out of? ";
    cin >> symbol;

    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }


    system("pause>0");
}
