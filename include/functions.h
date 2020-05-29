#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

// example
int numberOfNonZeroElements(vector <int> vec);

//vectors
int lengthOfMaxSequence(vector <int> vec);
int numberOfOddElements(vector <int> vec);
int numberOfEvenElements(vector <int> vec);
vector<int> extractOddElements(vector <int> vec);
vector<int> extractEvenElements(vector <int> vec);
vector<int> deleteMaxsFromVector(vector <int> vec, int num);
vector<int> deleteMinsFromVector(vector <int> vec, int num);
vector<int> reverseVector(vector <int> vec);
bool isSortedInAscendingOrder(vector <int> vec);
bool isSortedInDecreasingOrder(vector <int> vec);

// strings
int numberOfDigits(string str);
int sumOfDigits(string str);
int lengthOfMaxSequenceInString(string str);
string deleteSymbolFromString(string str, char symb);
string deleteCapitalLetters(string str);
string deleteSmallLetters(string str);
string deleteDigits(string str);
string reverseString(string str);

// maps
vector<string> extractNamesFromMap(map<string, string>);
vector<unsigned int> extractNumbersFromMap(map<string, string>);

// algorithms
unsigned int EuclideanAlgorithm(unsigned int M, unsigned int N);


#endif // __FUNCTIONS_H__
