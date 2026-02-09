#include<bits/stdc++.h>
using namespace std;

bool linear_search( int array[], int size_of_array, int find_element){
    for(int j=0; j<size_of_array; j++){
        if(array[j] == find_element){
            cout << "Element is Present on index: " << j << endl;
            return 0;
        }
    }
    cout << "Element not Found" << endl;
    return 0;
}

int main(){

    int t;
    cout << endl << "Enter number of elements in the array: " << endl;
    cin >> t;

    int input_array[t];

    for(int i=0; i<t; i++){
        cin >> input_array[i];
    }

    int element;
    cout << endl << "Enter the element to search: " << endl;
    cin >> element;


    linear_search(input_array, t, element);

}