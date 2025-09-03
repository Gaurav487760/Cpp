#include <iostream>
using namespace std;

int main() {
    double length, width, area;
    
    // Input length and width of rectangle
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    
    // Calculate area
    area = length * width;
    
    // Output area
    cout << "Area of rectangle: " << area << endl;
    
    return 0;
}
