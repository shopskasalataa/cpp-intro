#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x, y, distance = -1;

    cout << "Input lower left and upper right coordinates: " << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Input sheep coordinates: " << endl;
    cin >> x >> y;

    if(x1 <= x && x2 >= x && y1 <= y && y2 >= y){
        distance = 0;
    }else{
        if(x2 < x && y2 < y && x1 < x && y1 < y){
            distance = (y - y2)*(y - y2) + (x - x2)*(x - x2);
        }
        if(x2 < x && y2 > y && x1 < x && y1 < y){
            distance = (x - x2)*(x - x2);
        }
        if(x2 < x && y2 > y && x1 < x && y1 > y){
            distance = (x - x2)*(x - x2) + (y1 - y)*(y1 - y);
        }
        if(x1 < x && y1 > y && x2 > x && y2 > y){
            distance = (y1 - y)*(y1 - y);
        }
        if(x1 > x && y1 > y && x2 > x && y2 > y){
            distance = (x1 - x)*(x1 - x) + (y1 - y)*(y1 - y);
        }
        if(x1 > x && y1 < y && x2 > x && y2 > y){
            distance = (x1 - x)*(x1 - x);
        }
        if(x1 > x && y1 < y && x2 > x && y2 < y){
            distance = (x1 - x)*(x1 - x) + (y - y2)*(y - y2);
        }
        if(x1 < x && y1 < y && x2 > x && y2 < y){
            distance = (y - y2)*(y - y2);
        }
    }

    if(distance != -1){
        cout << "Distance: " << distance << endl;
    }else{
        cout << "Invalid data!" << endl;
    }

    return 0;
}