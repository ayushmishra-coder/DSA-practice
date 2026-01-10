#include<bits/stdc++.h>
using namespace std;
void explain_arraySort(){
    
    int arr[]={2,12,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]) ;
    
    //sorting full array(in ascending order)
    sort(arr,arr+size);                     //note that from a to a+n is being sorted and a+n is 1 index beyong last's so a+n isnt included just like we studied in v.end of containers
    for(int x:arr){
        cout << x << " ";
    }
    cout << endl;
    
    //sorting in descending order
    int a[]={2,12,5,6,7};
    int n=sizeof(a)/sizeof(a[0]) ;
    sort(a,a+n,greater<int>());
    for(int x:a){
        cout << x << " ";
    }
    cout << endl;

    //sorting only a part of array
    int A[]={14,12,5,7,6} ;
    int N=sizeof(A)/sizeof(A[0]) ;
    sort(A+2,A+N);
    for(int x:A){
        cout << x << " ";
    } 
    cout << endl;
}
void explain_containerSorting(){
    vector<int> v;
    v.emplace_back(12);
    v.emplace_back(8);
    v.emplace_back(10);
    v.emplace_back(4);
    v.emplace_back(15);//{12,8,10,4,15}
    sort(v.begin(),v.end()) ;           //similar syntax for sorting other containers as well
    for(int x:v){
        cout << x << " " ;
    }
    cout << endl;
}
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p2.second>p1.second){ return true;}
    else if(p2.second==p1.second){ if(p1.first>p2.first){return true;} else {return false;}}
    else{return false;}
}
void sort_pair_Q(){
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    //sort it according to second element
    //if same then sort accordind to 1st element but in descending order
    sort(a,a+3,comp);
    for(auto x:a){
        cout << "{" << x.first <<"," << x.second << "}" << " "  ;
    }
    cout << endl;
}
void count_of1_in_binaryOfNum(){
    
    int num=7;//binary is 111
    int cnt= __builtin_popcount(num) ; //returns 3
    //for lon long int like 1234567898876543 ,use __builtin_popcountll(num) and for long ones use __builtin_popcountl(num) 
}
void permutation_fn(){
    string str="123" ; // string should be sorted or else is to be shorted in ordered to print all possible permutation
    sort(str.begin(),str.end()); //to sort unsorted string above (if it is)
    
    do{
        cout << str << "\n" ;
    }
    while(next_permutation(str.begin(),str.end())) ;   
    //123->132->213->231....why this way because the latter is bigger than prior ,i.e,permutation done lexographically and returns and if next no. is already appeared before ,then returns false else true    
}

void max_min_element_ofArray(){
    int a[]={1,2,3,4,12,5};
    int n=sizeof(a)/sizeof(a[0]) ;
    cout << *max_element(a,a+n) ;
}

int main(){
    explain_arraySort();
    explain_containerSorting();
    sort_pair_Q();
    count_of1_in_binaryOfNum();
    permutation_fn();
    max_min_element_ofArray();
}