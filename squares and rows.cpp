// squares and rows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>

//use the atoi function 
int arr[4][6] = {
    {1, 2, 3, 2, 1, 1},
    {2, 4, 4, 3, 2, 2}, 
    {5, 5, 5, 5, 4, 4},
    {6, 6, 7, 6, 5, 5}
};// push the first row into buffer vector
//bouble check 

bool arraySortedCheck(std::vector<int> arr) {

    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        //when an array is not in sorted order
        if (arr[n - 1] < arr[n - 2])
            return false;
    }
    //all elements are checked and
    //all are in sorted order
    return true;
}








int main()
{
    std::vector<int> buffer;
    std::cout << "Hello Arrays!\n";
    for (int x = 0; x < 4; x++) {
        for (int f = 0; f < 6; f++) {
            buffer.push_back(arr[x][f]);



        }
        //implement something that checks if they are from low to high 
        if (arraySortedCheck(buffer)) {
            //pass
        }
        else {
            printf("eixt \n");
            exit(1);
        }
        

    }
    printf("none are blocking view\n");



}