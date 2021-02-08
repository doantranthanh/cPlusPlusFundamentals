#include "../include/std_lib_facilities.h"

double compute_mean_temp(vector<double> temps)
{
    double sum = 0.0;
    for (int i = 0; i < temps.size(); ++i)
    {
        sum += temps[i];
    }
    return sum;
}

double compute_median_tem(vector<double> temps)
{
    sort(temps.begin(), temps.end());
    return temps[temps.size()/2];
}

int main()
{
    vector<double> v;
    v.push_back(2.7);
    v.push_back(5.6);
    v.push_back(7.9);
    int size = v.size();
    for (int i = 0; i < size; ++i)
    {
        cout << "v[" << i << "]==" << v[i] << '\n';
    }

    vector<double> temps;
    double temp;
    while (cin >> temp)
    {
        temps.push_back(temp);
    }
    double avgTemp = compute_mean_temp(temps);
    cout << "Average temperature: " << avgTemp/temps.size() << endl;
    cout << "Median temperature: " << compute_median_tem(temps) << endl;
}

