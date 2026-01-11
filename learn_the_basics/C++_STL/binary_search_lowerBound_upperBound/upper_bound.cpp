#include<bits/stdc++.h>
using namespace std;
void explainUpper_Bound(){
    int A[]={1,4,5,6,9,9};
    //if searched element in arr:upper_bound STL returns an iterator pointing to index next to that of  1st occurence of element,i.e, the iterator pointing to element immediately greater than searched element
    int index=upper_bound(a,a+n,4) -a ; //returns iterator to index 4

    //if searched element not in arr:upper_bound returns iterator to element greater to searched element that is in the container,here array
    int index=upper_bound(a,a+n,7) -a ;//returns iterator to index 4,i.e, 9(>7)
    int index=upper_bound(a,a+n,10) -a;//returns iterator to index 6,i.e,(outside arr) after index of last element 9(10>9)

    //IN CASE OF vector/set/etc.
    //SYNTAX:
    int index=upper_bound(a.begin(),a.end(),X)-a.begin() ;//x is element u wanna search
}