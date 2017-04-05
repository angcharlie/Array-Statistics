//Charlie Ang
//01/10/16
//CSC 2430
//Prof. Tindall
//Lab #1
//This program inputs an array of numbers and the program will output 
//the mean and the standard deviation of the numbers.

#include <iostream>
#include <cmath>

using namespace std;

//Function prototypes
double mean(double a[], int numelements);
double standarddeviation(double a[], int numelements);

const int MAX = 10;	//number of elements 

int main()
{
	system("cls");	//clears extraneous texts

	cout << "This program inputs " << MAX << " real numbers and will output the mean "
		<< "and standard deviation of the numbers." << endl;	//prompt to user

	cout << " " << endl;	//spacing

	double myArray[MAX];	//initialize array to number of elements 

	double value;
	for (int i = 0; i < MAX; i++)	//loops from 0 to 9 for 10 total elements
	{
		cout << "Enter a number: ";
		cin >> value;
		myArray[i] = value;	//input user values into the array
	}

	cout << " " << endl;	//spacing

	double average = mean(myArray, MAX);	//returns average
	cout << "Average = " << average << endl;

	cout << " " << endl;	

	double stddev = standarddeviation(myArray, MAX);	//returns standard deviation
	cout << "Standard deviation = " << stddev << endl;
}

//This function takes in an array of doubles as a parameter, as well as an integer 
//for the total number of elements. It then calculates and returns the average.
double mean(double a[], int numelements)
{
	double sum = 0.0;
	double average = 0.0;
	for (int i = 0; i < numelements; i++)
	{
		sum += a[i]; //add up sum of all elements 
	}
	average = sum / numelements;
	return average;
}

//This function takes in an array of doubles as a parameter, as well as an integer for the 
//total number of elements. It then calculates and returns the standard deviation.
double standarddeviation(double a[], int numelements)
{
	double avg = mean(a, numelements);	//calls mean function to calculate average
	double sum = 0.0;
	for (int i = 0; i < numelements; i++)
	{
		//sum += pow((a[i] - avg), 2);
		sum += ((a[i] - avg) * (a[i] - avg)); //sum of deviations of numbers from mean
	}
	double variance = sum / (numelements - 1);	///formula for calculating variance 
	double stddev = sqrt(variance);	//std dev = square root of variance 
	return stddev;
}