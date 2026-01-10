#include<bits/stdc++.h>
using namespace std;
void explainLower_Bound(){
    int A[]={1,4,5,6,9,9};
    //if searched element in arr:lower_bound STL returns an iterator pointing to 1st occurence of element if its found
    int index=lower_bound(a,a+n,4) -a ; //returns iterator to index 1
    int index=lower_bound(a,a+n,9) -a ; //returns iterator to index 4

    //if searched element not in arr:lower_bound returns iterator to element greater to searched element that is in the container,here array
    int index=lower_bound(a,a+n,7) -a ;//returns iterator to index 4,i.e, 9(>7)
    int index=lower_bound(a,a+n,10) -a;//returns iterator to index 6,i.e, after index of last element 9(10>9)

    //IN CASE OF vector/set/etc.
    //SYNTAX:
    int index=lower_bound(a.begin(),a.end(),X)-a.begin() ;
}