#include<iostream>
using namespace std;
int main()
{
int n = 10;
int s, i, j;
for(i = 1; i <= n; i++)
{
//for loop for displaying space
for(s = i; s < n; s++)
{
cout << " ";
}
//for loop to display star equal to row number
for(j = 1; j <= (2 * i - 1); j++)
{
cout << "*";
}
// ending line after each row
cout << "\n";
}
}