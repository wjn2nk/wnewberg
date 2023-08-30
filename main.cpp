#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double volume(double n, double r)
{
    double half_n = n/2;
    double result = (pow(M_PI, half_n)) * (pow(r, n)) / (tgamma(half_n+1));
    return result;
}

int main() {

    ofstream myfile ("VolumePlot.dat");

    double n;
    //double r;

    cout << "Dimensions: ";
    cin >> n;
    //cout << "Radius: ";
    //cin >> r;

    for(int i = 0; i < 41; i++)
    {
        double iteration = double(i)/20;
        myfile << iteration;
        myfile << " ";
        myfile << volume(n, iteration);
        myfile << "\n";
    }

    //double result = volume(n, r);
    //cout << result;

    //myfile << result;
    myfile.close();

    return 0;
}
