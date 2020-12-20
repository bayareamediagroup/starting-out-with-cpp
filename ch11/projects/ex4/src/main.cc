#include <iostream>
#include <cstdio>
#include <cstring>

#include "weather.h"

#define SIZE 3

using namespace std;

void statistics(weather_t *m, const char *mon[], const int i)
{
  cout << "Enter data for the month of " << mon[i] << "\n";
  cin >> m->high;
}

int main(void)
{
  int cnt = 0;

  const char *month[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};

  weather_t weather[SIZE];

  do {
    statistics(&weather[cnt], month, cnt);
    cnt++;
  } while(cnt < SIZE);

  return 0;
}

/*
 * Write a program that uses a structure to store the following weather data for a particular month:
 *
 *      Total Rainfall
 *      High Temperature
 *      Low Temperature
 *      Average Temperature
 *
 * The program should have an array of 12 structures to hold weather data for an entire year.
 *
 * When the program runs, it should ask the user to enter data for each month.
 * (The average temperature should be calculated.)
 *
 * Once the data are entered for all the months, the program should calculate and display the average
 * monthly rainfall, the total rainfall for the year, the highest and lowest temperature for the year
 * (and the months they occured in), and average of all the montly aveage tempartures.
 *
 * input validataion: only accept temperatures witin the range between - 100 and x 140 degrees fahrenheit.
 * */
