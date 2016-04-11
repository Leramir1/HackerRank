/*You are given an array of integers of size NN. You need to print the sum of the elements 
in the array, keeping in mind that some of those integers may be quite large.

Input

The first line of the input consists of an integer NN. The next line contains NN space-separated 
integers contained in the array.

Constraints 
1≤ N ≤ 10
0 ≤ A[i] ≤ 10^10
 
Sample Input 
5
1000000001 1000000002 1000000003 1000000004 1000000005

Output 
Print a single value equal to the sum of the elements in the array. In the above sample, you 
would print 5000000015.

Note: The range of the 32-bit integer is (−2^31) to (2^31−1) or [−2147483648,2147483647].
When we add several integer values, the resulting sum might exceed the above range. You might 
need to use long long int in C/C++ or long data type in Java to store such sums. */

#include <cstdio>
#include <vector>
#include <iostream>
#include <typeinfo>
#include <cmath>

// template<class T, class U>
// auto add(T t, U u) -> decltype(t + u) // the return type is the type of operator+(T, U)
// {
//     return t + u;
// }


int main(){
    // int n;
    // cin >> n;
    // vector<long long int> arr(n);
    // for(int arr_i = 0;arr_i < n;arr_i++){
    //    cin >> arr[arr_i];
    // }

    // auto b = add(1, 1.2);
    // std::cout << "type of b: " << typeid(b).name() << '\n';


	long long int n = 5, result = 0;
	std::vector<long long int> arr = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};

	// std::cout << n << std::endl;
	// for (int arr_i = 0; arr_i < n; arr_i++){
	// 	std::cout << arr[arr_i] << " ";
	// }

	for (int arr_i = 0; arr_i < n; arr_i++){
		result += arr[arr_i];
	}		

	std::cout << result << std::endl;

    return 0;
}