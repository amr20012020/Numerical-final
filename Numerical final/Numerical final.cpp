#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double t0, te, k, dt, ti = 0, time, T, timefinal, Treal;

	    //input variables
	cout << "Please input the initial temperature" << endl;
	cin >> t0;
	cout << "Please input the tempurature of the surroundings." << endl;
	cin >> te;
	cout << "Please input rate of tempurature decey (k)." << endl;
	cin >> k;
	cout << "Please input the desired time interval between calculations (hours)" << endl;
	cin >> dt;
	cout << "Please input the length of the simulation (hours)." << endl;
	cin >> timefinal;

	T = t0;
	time = ti;
	Treal = 0;
	while (time <= timefinal)
	{
		cout << "Time: " << time << " Temp: " << T << " Temp real: " << Treal << endl;
		T = T + k * (te - T) * dt;
		time = time + dt;
		Treal = te + (t0 - te) * exp(-k * time);
	}

	return 0;
}