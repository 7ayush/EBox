//
//  main.cpp
//  Ebox
//
//  Created by Ayush Kaushik on 21/05/20.
//  Device- Ayush's Macbook Pro
//  Copyright © 2020 Practice. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "Exhibition.cpp"
#include "StageEvent.cpp"
using namespace std;

string* splitString(string str){
string* arr = new string[25];
int i=0;
string delimiter = ",";
size_t pos = 0;
string token;
str+=",";
while ((pos = str.find(delimiter)) != string::npos) {
    token = str.substr(0, pos);
    arr[i]=token;

    str.erase(0, pos + delimiter.length());
    i++;
}

  return arr;
}

int main(){
    
    string str;
    int choice;
    Exhibition e;
    StageEvent se;
    
    string *arr;
    cout<<"Choose Event type\n";
    cout<<"1.Exhibition\n";
    cout<<"2.Stage Event\n";
    cin>>choice;
    switch(choice){
        case 1:
        {
             // fill the code
             cout<<"Enter the details of Exhibition in CSV format"<<endl;
             cin>>str;
             arr=splitString(str);
             e=Exhibition(arr[0],arr[1],arr[2],arr[3],stoi(arr[4]));
             e.display();
             break;
        }
        case 2:
        {
             cout<<"Enter the details of Stage Event in CSV format"<<endl;
             cin>>str;
             arr=splitString(str);
             se=StageEvent(arr[0],arr[1],arr[2],arr[3],stoi(arr[4]));
             se.display();
             break;
             // fill the code
        }
        default:
            cout<<"Invalid choice\n";
            break;
    }
    return 0;
}

