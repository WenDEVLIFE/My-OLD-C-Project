// C++ implementation of printing
// star pattern in single loop
 
#include <iostream>
using namespace std;
 
// Function to print the star
// pattern in single loop
void pattern(int n)
{
    int i, k, flag = 1;
   
    // Loop to handle number of rows and
    // columns in this case
    for (i = 1, k = 0; i <= 2 * n - 1; i++) {
        // Handles case 1
        if (i < n - k)
            cout << " ";
 
        // Handles case 2
        else {
            if (flag)
                cout << "*";
            else
                cout << " ";
 
            flag = 1 - flag;
        }
 
        // Condition to check case 3
        if (i == n + k) {
            k++;
            cout << endl;
 
            // Since for nth row we have
            // 2 * n- 1 columns
            if (i == 2 * n - 1)
                break;
 
            // Reinitializing i as 0,
            // for next row
            i = 0;
            flag = 1;
        }
    }
}
 
// Driver Code
int main()
{
    int n = 6;
   
    // Function Call
    pattern(n);
    return 0;
}