#include <gtest.h>
#include <map>
#include "functions.h"

// numberOfNonZeroElements
TEST(numberOfNonZeroElements, NoNonZeroElems)
{
    vector <int> v { 0, 0, 0, 0, 0 };
    EXPECT_EQ(0, numberOfNonZeroElements(v));
}

TEST(numberOfNonZeroElements, TwoNegativeNonZeroElems)
{
    vector <int> v{0, -1, -2, 0, 0, 0};
    EXPECT_EQ(2, numberOfNonZeroElements(v));
}

// lengthOfMaxSequence
TEST(lengthOfMaxSequence, DISABLED_NoSequence)
{
    vector <int> v{ 0, -1, -2, 4, 2, 0 };
    EXPECT_EQ(1, lengthOfMaxSequence(v));
}

TEST(lengthOfMaxSequence, DISABLED_ThreeZerosInASequence)
{
    vector <int> v{ 0, -1, -2, 0, 0, 0 };
    EXPECT_EQ(3, lengthOfMaxSequence(v));
}

// numberOfOddElements
TEST(numberOfOddElements, DISABLED_NoOddElements)
{
    vector <int> v{ 2, 4, 766412, 238 };
    EXPECT_EQ(0, numberOfOddElements(v));
}

TEST(numberOfOddElements, DISABLED_TwoNegativeOddNumbers)
{
    vector <int> v{ 0, -1, -333, 0, 24, 0 };
    EXPECT_EQ(2, numberOfOddElements(v));
}

// numberOfEvenElements
TEST(numberOfEvenElements, DISABLED_NoEvenElements)
{
    vector <int> v{ 21, 3, -766413, 2381 };
    EXPECT_EQ(0, numberOfEvenElements(v));
}

TEST(numberOfEvenElements, DISABLED_TwoNegativeEvenNumbers)
{
    vector <int> v{ -1873, -12, -28, 0, 9, 0 };
    EXPECT_EQ(2, numberOfEvenElements(v));
}

// extractOddElements
TEST(extractOddElements, DISABLED_NoOddElements)
{
    vector <int> v{ 2, 4, 766412, 238 };
    EXPECT_EQ(vector<int>(), extractOddElements(v));
}

TEST(extractOddElements, DISABLED_TwoNegativeOddNumbers)
{
    vector <int> v{ 0, -1, -333, 0, 24, 0 };
    vector <int> res { -1, -333 };
    EXPECT_EQ(res, extractOddElements(v));
}

// extractEvenElements
TEST(extractEvenElements, DISABLED_NoEvenElements)
{
    vector <int> v{ 21, 43, 76641, 23 };
    EXPECT_EQ(vector<int>(), extractEvenElements(v));
}

TEST(extractEvenElements, DISABLED_TwoNegativeOddNumbers)
{
    vector <int> v{ 0, -2, -3332, 0, 24, 0 };
    vector <int> res{ -2, -3332 };
    EXPECT_EQ(res, extractEvenElements(v));
}

// deleteMaxsFromVector
TEST(deleteMaxsFromVector, DISABLED_OnlyOneElem)
{
    vector <int> v{ 0, 0, 0, 0, 0 };
    EXPECT_EQ(vector<int>(), deleteMaxsFromVector(v, 1));
}

TEST(deleteMaxsFromVector, DISABLED_DeleteThreeMaxs)
{
    vector <int> v { 2, -1, 22, 0, -2, 0 };
    vector <int> res {-1, -2 };
    EXPECT_EQ(res, deleteMaxsFromVector(v, 3));
}

// deleteMinsFromVector
TEST(deleteMinsFromVector, DISABLED_OnlyOneElem)
{
    vector <int> v{ 0, 0, 0, 0, 0 };
    EXPECT_EQ(vector<int>(), deleteMinsFromVector(v, 1));
}

TEST(deleteMinsFromVector, DISABLED_DeleteThreeMins)
{
    vector <int> v{ 2, -1, 22, 0, -2, 0 };
    vector <int> res{ 2, 22 };
    EXPECT_EQ(res, deleteMinsFromVector(v, 3));
}

// reverseVector
TEST(reverseVector, DISABLED_ReverseVectorOddNumberOfElements)
{
    vector <int> v{ 2, -1, 22, 0, -2 };
    vector <int> res{ -2, 0, 22, -1, 2 };
    EXPECT_EQ(res, reverseVector(v));
}

TEST(reverseVector, DISABLED_ReverseVectorEvenNumberOfElements)
{
    vector <int> v{ 2, -1, 22, 0, -2, 0};
    vector <int> res{ 0, -2, 0, 22, -1, 2 };
    EXPECT_EQ(res, reverseVector(v));
}

// isSortedInAscendingOrder
TEST(isSortedInAscendingOrder, DISABLED_SortedInAscendingOrder)
{
    vector <int> v{ -12, -12, 1, 2, 2, 10, 57 };
    EXPECT_EQ(true, isSortedInAscendingOrder(v));
}

TEST(reverseVector, DISABLED_NotSortedInAscendingOrder)
{
    vector <int> v{ -12, -12, 1, 2, 2, 10, 57, 0};
    EXPECT_EQ(false, isSortedInAscendingOrder(v));
}

// isSortedInDecreasingOrder
TEST(isSortedInDecreasingOrder, DISABLED_SortedInDecreasingOrder)
{
    vector <int> v{ 43, 4, 0, 0, 0, -23, -283 };
    EXPECT_EQ(true, isSortedInDecreasingOrder(v));
}

TEST(isSortedInDecreasingOrder, DISABLED_NotSortedInDecreasingOrder)
{
    vector <int> v{ 43, 4, 0, 0, 0, -23, -283, 8327 };
    EXPECT_EQ(true, isSortedInDecreasingOrder(v));
}

// numberOfDigits
TEST(numberOfDigits, DISABLED_NoDigitsInAString)
{
    string s {"Hello, world!"};
    EXPECT_EQ(0, numberOfDigits(s));
}

TEST(numberOfDigits, DISABLED_FiveDigitsInAString)
{
    string s{ "Hello, 1-2world!345" };
    EXPECT_EQ(5, numberOfDigits(s));
}

// sumOfDigits
TEST(sumOfDigits, DISABLED_NoDigitsInAString)
{
    string s{ "Hello, world!" };
    EXPECT_EQ(0, sumOfDigits(s));
}

TEST(sumOfDigits, DISABLED_ThereAreDigitsInAString)
{
    string s{ "Hello, 1-2world!345" };
    EXPECT_EQ(15, sumOfDigits(s));
}

// numberOfSequencesInString
TEST(lengthOfMaxSequenceInString, DISABLED_NoSequences)
{
    string s{ "Helo, 1-2world!345" };
    EXPECT_EQ(1, lengthOfMaxSequenceInString(s));
}

TEST(lengthOfMaxSequenceInString, DISABLED_FourLettersInASequence)
{
    string s{ "Hello,  nnnn  1-2world!345" };
    EXPECT_EQ(4, lengthOfMaxSequenceInString(s));
}

// deleteSymbolFromString
TEST(deleteSymbolFromString, DISABLED_DeleteAllSymbols)
{
    string s{ "2222222" };
    EXPECT_EQ("", deleteSymbolFromString(s, '2'));
}

TEST(deleteSymbolFromString, DISABLED_DeleteSpace)
{
    string s{ "Hello, 1-2world!345" };
    EXPECT_EQ("Hello,1-2world!345", deleteSymbolFromString(s, ' '));
}

// deleteCapitalLetters
TEST(deleteCapitalLetters, DISABLED_NoCapitalLetters)
{
    string s{ "hello, world!" };
    EXPECT_EQ("hello, world!", deleteCapitalLetters(s));
}

TEST(deleteCapitalLetters, DISABLED_AllCapitalLetters)
{
    string s{ "AAAAAAAAAA" };
    EXPECT_EQ("", deleteCapitalLetters(s));
}

// deleteSmallLetters
TEST(deleteSmallLetters, DISABLED_NoSmallLetters)
{
    string s{ "HELLO-WORLD !" };
    EXPECT_EQ("HELLO-WORLD !", deleteSmallLetters(s));
}

TEST(deleteSmallLetters, DISABLED_AllSmallLetters)
{
    string s{ "hello---world" };
    EXPECT_EQ("", deleteSmallLetters(s));
}

// deleteDigits
TEST(deleteDigits, DISABLED_NoDigits)
{
    string s{ "HELLO-WORLD !" };
    EXPECT_EQ("HELLO-WORLD !", deleteDigits(s));
}

TEST(deleteDigits, DISABLED_AllDigits)
{
    string s{ "1234567890" };
    EXPECT_EQ("", deleteDigits(s));
}

// reverseString
TEST(reverseString, DISABLED_ReverseStringOddNumberOfElements)
{
    string s {"2-1220-2"};
    string res {"2-0221-2"};
    EXPECT_EQ(res, reverseString(s));
}

TEST(reverseString, DISABLED_ReverseStringEvenNumberOfElements)
{
    string s{ "2-1220-2_AA" };
    string res{ "AA_2-0221-2" };
    EXPECT_EQ(res, reverseString(s));
}

// extractNamesFromMap
TEST(extractNamesFromMap, DISABLED_ExtractThreeNames)
{
    map<string, string> m { {"alla", "78742983"}, {"38475983", "max12"}, {"56327", "unnamed"}, {"98", "112"} };
    vector<string> res {"alla", "max12", "unnamed"};
    EXPECT_EQ(res, extractNamesFromMap(m));
}

TEST(extractNamesFromMap, DISABLED_NoNamesInMap)
{
    map<string, string> m{ {"38475983", "m1111"}, {"56327", "92843"}, {"98", "112"} };
    vector<string> res {};
    EXPECT_EQ(res, extractNamesFromMap(m));
}

// extractNumbersFromMap
TEST(extractNumbersFromMap, DISABLED_ExtractFourNumbers)
{
    map<string, string> m{ {"alla", "78742983"}, {"38475983", "max"}, {"5632", "unnamed"}, {"98", "asbc"} };
    vector<unsigned int> res{ 78742983, 38475983, 5632, 98 };
    EXPECT_EQ(res, extractNumbersFromMap(m));
}

TEST(extractNumbersFromMap, DISABLED_NoNumbersInMap)
{
    map<string, string> m{ {"skjdnf", "m1111"}, {"akdj", "ladkmsd"}, {"9dk8", "aaa112"} };
    vector<unsigned int> res{};
    EXPECT_EQ(res, extractNumbersFromMap(m));
}

// EuclideanAlgorithm
TEST(EuclideanAlgorithm, DISABLED_CoprimeIntegers)
{
    EXPECT_EQ(1, EuclideanAlgorithm(35, 88));
}

TEST(extractNumbersFromMap, DISABLED_NotCoprime)
{
    EXPECT_EQ(13, EuclideanAlgorithm(65, 169));
}
