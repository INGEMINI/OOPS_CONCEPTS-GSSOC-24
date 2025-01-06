#include <iostream>
using namespace std;

class Time
{
private:
  int hours;
  int minutes;
  int seconds;

public:
  // Member function to read the time values
  void readTime()
  {
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;
  }
  void addTime(Time t2)
  {
    seconds += t2.seconds;
    minutes += t2.minutes;
    hours += t2.hours;

    while (seconds >= 60)
    {
      seconds -= 60;
      minutes++;
    }
    while (minutes >= 60)
    {
      minutes -= 60;
      hours++;
    }
    if (hours >= 24)
    {
      hours -= 24; // Keeping hours within a 24-hour format
    }
  }

  // Member function to display time in HH:MM:SS format
  void displayTime()
  {
    cout << (hours < 10 ? "0" : "") << hours << ":"
         << (minutes < 10 ? "0" : "") << minutes << ":"
         << (seconds < 10 ? "0" : "") << seconds << endl;
  }
};

int main()
{
  Time time1, time2;

  // Read time for two objects
  cout << "Enter time for first object:" << endl;
  time1.readTime();
  cout << "Enter time for second object:" << endl;
  time2.readTime();

  // Add time2 to time1
  time1.addTime(time2);

  // Display the result
  cout << "The sum of the times is: ";
  time1.displayTime();

  return 0;
}
