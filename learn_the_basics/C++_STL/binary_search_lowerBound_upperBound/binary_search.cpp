//Q. Check if as sorted array has a certain element 'X'
#include<bits/stdc++.h>
using namespace std;
void explain_binarySearch(){
    int A[]= {1,4,5,8} ;

    //binary_search is (inbuilt function)STL used for the above asked purpose
    
    bool res= binary_search(a,a+n,3); //returns false as cant find 3 //a is iterator pointing to 1st elemnt, n is size of A,a+n is iterator that points to last element
    bool res= binary_search(a,a+n,4);  //returns true as  can find 3 //a is iterator pointing to 1st elemnt, n is size of A
}