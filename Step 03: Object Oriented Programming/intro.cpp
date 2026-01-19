/*
object created from a class will have the memory = total of all the memory taken by the variables initalised in the class according to the datatype
object created from empty class has a memory of 1 byte

classes can be created in another file and then later on can be included in other file using the #include method 

padding and greedy algorithm 

static and dynamic allocation
 
*/

#include <bits/stdc++.h>
using namespace std;

class Hero{
    
    private:
    int health;

    public:
    int level;

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }
};

int main(){
    Hero ramesh;
    
    int h;
    cin >> h;

    ramesh.setHealth(h);

    cout << "Ramesh health is " << ramesh.getHealth() << endl;
    cout << sizeof(ramesh) << endl;

    return 0;
}