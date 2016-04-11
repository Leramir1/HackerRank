/*
You are given an array of integers of size NN. Can you find the sum of the elements in the array?

Input 
The first line of input consists of an integer NN. The next line contains NN space-separated integers representing the array elements. 
Sample:

6
1 2 3 4 10 11

Output 
Output a single value equal to the sum of the elements in the array. 
For the sample above you would just print 31 since 1+2+3+4+10+11=31.
*/

 
#include <cstdio>
#include <vector>
#include <iostream>


int main(){
	//int n;
    //std::cin >> n;
	//std::vector<int> arr(n);
//    for(int arr_i = 0;arr_i < n;arr_i++){
//       std::cin >> arr[arr_i];
//    }
    int n = 6;
    int sum = 0;
    std::vector<int> arr = {1,2,3,4,10,11};

    for(int arr_i = 0;arr_i < n;arr_i++){
    	sum += arr[arr_i];
    }

    std::cout << sum <<std::endl;

    return 0;
}