#include<iostream>
using namespace std;
int main(){
    double  fat, fatper;
    int calorie;
    string foodname;
    cout<<"Enter the name of food : ";   //Enter the food name;
    cin>>foodname;
    cout<<"Enter the grams : ";  //Enter grams;
    cin>>fat;
    cout<<"Enter calorie : ";
    cin>>calorie;
       
    fatper = ( fat / (float)(calorie)) * 100;  //calculates fat percentage
    cout<<"Percentage of fat in "<<foodname<<" : "<<fatper<<'\n';  

    if (fatper <= 30)
      cout<< foodname << ":- Healthy food item";  //This item is Heart Healty!
    else
      cout<< foodname  <<":- Non Healthy food item";      
   return 0;
}

