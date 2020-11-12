#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
int elmo,count=0,search;
bool rt=false;

cout<<"Enter number of Elements: ";
cin>>elmo;

int arr[10];


for(int k=0; k<elmo; k++){//ENTER ELEMENTS
    cout<<"Element["<<k<<"]"<<endl;
    cin>>arr[k];

}
int val= arr[0];
int val1= arr[0];
int exp= arr[0];


cout<<"Enter number to be Search: ";
cin>>search;
 for(int k=0; k<elmo; k++){
    if(search!=arr[k]){
        count++;

    }

 }

 cout<<"Occurrences: "<<count<<endl;
 cout<<endl;

    for(int k=0; k<elmo; k++){//PRIME OR COMPOSITE
        rt=false;
    for(int i=2; i<=arr[k]/2; i++){
  if(arr[k]%i!=0){
        rt=true;
}
    }
    if(rt==false){
        cout<<"Element["<<k<<"]: "<<arr[k]<<" is prime"<<endl;
    }else{
        cout<<"Element["<<k<<"]: "<<arr[k]<<" is composite"<<endl;
    }
    }

 cout<<endl;
    for(int k=0; k<elmo; k++){//HIGHEST OR LOWESt

        if(arr[k]<val1){
            val1=arr[k];
        }
        else if(arr[k]>val){
            val=arr[k];
        }

    }

cout<<"The Highest is: "<<val<<endl;
cout<<"The Lowest is: "<<val1<<endl;
 cout<<endl;
        for(int k=0; k<elmo; k++){//EXPONENTATION
                    exp=pow(arr[k],k);

               cout<<arr[k]<<" exponent "<<k<<" = "<<exp<<" "<<endl;

        }

system("pause");
}
