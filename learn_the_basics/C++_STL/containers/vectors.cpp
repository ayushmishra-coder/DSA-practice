#include<bits/stdc++.h>
using namespace std;

//following is just for learning not for execution

void explainVector(){
    //initialising vector
    vector<int> v; //creates {}
    
    //adding integer to vector's container
    v.push_back(1);   //makes {1}
    v.emplace_back(2);//similar as push back but faster // makes {1,2} ,i.e, adds 2 after dynamically increasing vector's size

    vector<pair<int,int>> vec;
    //adding pair (see difference in syntaxs of push_back and emplace_back)
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    //adding n no. of same element
    vector<int> v(5,100) ; // gives {100,100,100,100,100}
    vector<int> v(5)   ;  // gives 5 garbage or 0 but same values. 
    vector<int> v1(5,20) ;
    vector<int> v2(v1); //copies/adds v1 to v2

//ITERATOR(similar to pointer in C):
    vector<int>::iterator it=v.begin(); //points to adress of 1st elment of vector v
    it++;                              //points to second element's adress (at index 1)
    cout << *(it) ;                   // gives value at the 2nd elemnt adress,i.e,gives 2nd elemnt value
    cout << endl;
    it=it+2;
    cout << *it << " ";

    vector<int>::iterator it=v.end() ; //points to adress just after that of last element's Not the last elemnt's adress unlike begin
    /*vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();*/  //rarely used

    //printing elements of vector v.
    cout << v[0] ;   //or cout << v.at(0)
    cout << v.back() << " ";
    //printing all elements of the vector 
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *(it) << endl;
    }
    for(auto it =v.begin();it!=v.end();it++){
        cout << *(it) << endl;
    }
    for(auto it : v){
        cout << it << endl;
    }

    //{10,20,12,23}
    v.erase(v.begin()+1);  //erases 1st element
    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4); //erases (1+2)=3rd to before (1+4)=5th element,i.e, results {10,20,35}

    vector<int>v(2,100);       //{100,100}
    v.insert(v.begin(),300);   //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}
    
    vector<int> copy(2,50);   //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}
    
    //{10,20}
    cout << v.size() ;// 2
    //{10,20,30}
    v.pop_back();  //{10,20} //pops/removes last elemnts and shrinks size as well as obvious

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2);  //v1 -> {30,40} , v2 ->{10,20}

    v.clear(); // erases the entire vector

    cout << v.empty(); // gives True if vector is empty else False
}
