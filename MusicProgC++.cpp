#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;


int keyFn(){
    srand((unsigned)time(0)); 
    int i;
    i = (rand()%7)+1; 
    return i;
}
int accentFn(){
   srand((unsigned)time(0)); 
    int i;
    i = (rand()%3)+1; 
    return i;  
}
/*int progressionFn(){

     //return ran;
   
}*/
// need to have a one 

int main() { 
    bool Mmprog;
    int Key_m = 96 + keyFn();
    int Key_M = 64 + keyFn();
    char character_m =char(Key_m);
    char character_M =char(Key_M);

    string accent; 
    int accentVar = accentFn();
    switch (accentVar){
    case 1:
        accent = "Flat";
        break;
    case 2: 
        accent = "Natural";
        break;
    case 3: 
        accent = "Sharp"; 
        break;
    
    default:
        break;
    }

    int i;
    int random1, random2, random3;
    srand((unsigned)time(0)); 
    
    random1 = (rand()%7)+1;
    random2 = (rand()%7)+1;
    random3 = (rand()%7)+1;
    int prog[] = {1, random1, random2, random3};
    int index;
    //srand(time(0));
    int temp =0; 
    /*for (i =0; i , i < 4; i++){
        index = rand() %4; 
        temp = prog[];
        prog[i] = prog[index];
        prog[index] = temp;
    }*/
    
    //cout << prog[index];


    cout << "*********************************\n";
    cout << "Welcome to Progression Generator!\n";    
    cout << "Do you want a Major or minor Progression?\n";
    cout << "(For Major enter 0, For minor enter 1)\n";
    cin >> Mmprog; 

    if (Mmprog == 0) {
        cout << "Your Progression is: " << character_M << " " << accent << " Major " << ", And the Progression is: ";
    } else {
        cout << "Your Progression is: " << character_m << " " << accent << " minor " << ", And the Progression is: ";
    }

    int u;
    for(u=0; u<4 ; u++)
    {
        cout<< prog[u];
    }
   
    return 0;  
}