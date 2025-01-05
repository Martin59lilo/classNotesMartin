#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x1;
    double x2;
    double y1;
    double y2;
    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;
    double distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout << "La distancia es: " << distancia;
    return 0;
}