#include "../include/std_lib_facilities.h";

double compute_total_distance(vector<double> distances)
{
    double sum = 0.0;
    for(int i = 0; i < distances.size(); ++i)
    {
        sum += distances[i];
    }
    return sum;
}

double compute_median_distance(vector<double> distances)
{
    sort(distances.begin(), distances.end());
    return distances[distances.size()/2];
}

int main()
{
    vector<double> distances;
    double distance;
    while(cin >> distance)
    {
        distances.push_back(distance);
    }
    cout << "Total distance is " << compute_total_distance(distances) << endl;
    sort(distances.begin(), distances.end());
    cout << "Smallest distance is " << distances[0] << endl;
    cout << "Greatest distance is " << distances[distances.size()-1] << endl;
    keep_window_open();
}