/*Given a square matrix of size N×N, calculate the absolute difference between the sums 
of its diagonals.

Input Format

The first line contains a single integer, N. The next N lines denote the matrix's rows, 
with each line containing NN space-separated integers describing the columns.

Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single 
integer.

Sample Input
 
3
11 2 4                   
4 5 6 					 
10 8 -12				 
Sample Output

(0,0)(0,1)(0,2)
(1,0)(1,1)(1,2)
(2,0)(2,1)(2,2)

						(0,0)(1,1)(2,2)
						(2,0)(1,1)(0,2)

(0,0)(0,1)(0,2)(0,3)
(1,0)(1,1)(1,2)(1,3)
(2,0)(2,1)(2,2)(2,3)
(3,0)(3,1)(3,2)(3,3)

						(0,0)(1,1)(2,2)(3,3)
						(3,0)(2,1)(1,2)(0,3)


15
Explanation

The primary diagonal is: 
11
      5
            -12

Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:
            4
      5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19 
Difference: |4 - 19| = 15 */

#include <stdlib.h>
#include <cstdio>
#include <vector>
#include <iostream>

int main(){
    int n, diag_sum1 = 0, diag_sum2 = 0;
    std::cin >> n;
    std::vector< std::vector<int> > a(n,std::vector<int>(n));
 
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          std::cin >> a[a_i][a_j];
       }
    }

    for (int a_i = 0; a_i < n; a_i++){
    	for (int a_j = 0; a_j < n; a_j++){
    		if (a_i == a_j){
    			diag_sum1 += a[a_i][a_j];
    		}
		}
    }

    for (int a_i = 0, a_j = n-1; a_i < n; a_i++, a_j--){
    	diag_sum2 += a[a_i][a_j];
    }

    std::cout << abs(diag_sum1 - diag_sum2) << std::endl;

    return 0;
}