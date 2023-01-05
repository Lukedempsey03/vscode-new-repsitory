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
int accentRand(){
   srand((unsigned)time(0)); 
    int i;
    i = (rand()%3)+1; 
    return i;  
}
string accentFn(){
     string accent; 
    int accentVar = accentRand();
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
    return accent;
} 
void shuffle(int prog[], int len){
  int temp =0;
  int randomIndex =0;
    for (int i = 0; i < len; i++)
    {
        randomIndex = rand() % len;
       temp = prog[i];
       prog[i] = prog[randomIndex];
       prog[randomIndex] = temp;

    }
    
}
int main() { 
    bool Mmprog;
    int Key_m = 96 + keyFn();
    int Key_M = 64 + keyFn();
    char character_m =char(Key_m);
    char character_M =char(Key_M);

    int i;
    int random1, random2, random3;
    srand((unsigned)time(0)); 
    random1 = (rand()%7)+1;
    random2 = (rand()%7)+1;
    random3 = (rand()%7)+1;
    int prog[4] = {1, random1, random2, random3};

    shuffle(prog, 4);

    cout << "*********************************\n";
    cout << "Welcome to Progression Generator!\n";    
    cout << "Do you want a Major or minor Progression?\n";
    cout << "(For Major enter 0, For minor enter 1)\n";
    cout << "Enter Here: ";
    cin >> Mmprog; 

    if (Mmprog == 0) {
        cout << "Your Progression is: " << character_M << " " << accentFn() << " Major " << ", And the Progression is: ";
    } else {
        cout << "Your Progression is: " << character_m << " " << accentFn() << " minor " << ", And the Progression is: ";
    }

    int u;
    for(u=0; u<4 ; u++)
    {
        cout<< prog[u];
    }
   
    return 0;  
}