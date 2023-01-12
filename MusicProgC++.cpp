#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;

// This function uses the same "(rand()%7)+1;"
// stuff that random1-3 use, try to reuse it so you
// dont have the same logic scattered around
int keyFn(){
    srand((unsigned)time(0)); 
    int i;
    i = (rand()%7)+1;
    return i;
}

// keyFn and accentRand are the same "logic" just different numbers
// i.e one uses 7, the other uses 3. You should make a function where you can
// pass in the number so it would look like: i = (rand()%num)+1
int accentRand(){
    // Watch out for spacing stuff like below
   srand((unsigned)time(0)); 
    int i;
    i = (rand()%3)+1; 
    return i;  
}
string accentFn(){
    // Watch out for spacing stuff like below
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
        // Watch out for the spacing stuff like below
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
    // Try to refactor the below using an array and a for loop
    // Something like:
    // for (int i = 0; i < 4; i++) {
    //  random_nums[i] = (rand()%7)+1;
    // }
    // Maybe put it in it's own function so it can be reused again as well
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

    // IMO: it is cleaner to declare for loops like this for (int u = 0; u < 4; u++)
    int u;
    for(u=0; u<4 ; u++)
    {
        cout<< prog[u];
    }
   
    return 0;  
}

// Bonus point stuff:
// (Easy): Change all the requested changes I typed out above (also by (Easy) I mean relative to the next task not in general)
// (Hard): Refactor the program to use std::vector instead of arrays
