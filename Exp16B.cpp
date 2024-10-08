// NAME - PRANJAL PANWAR 
// PRN - 23070123164 
// EXPERIMENT - 16(B) 

// EXCEPTION HANDLING 

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18) {
            throw age;
        }
        else {
            cout<<"Age: "<<age<<"\n APPROVED"<<endl;
        }
    }
    catch(int a) {
        cout<<"\n ERROR: Underage! ("<<age<<")"<<endl;
    }
}

// Output 

// Enter age: 7 
//  
//  ERROR: Underage! (7) 

// Enter age: 23
// Age: 23
//  APPROVED 
