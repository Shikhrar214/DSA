#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<int> v;
    cout << endl << "Enter values for array (enter 'q' to stop):" << endl;
    string input;
    int count = 0;
    
    while (cin >> input) {
        if (input == "q") break;  // char/string check
        int num = stoi(input);    // convert to number
        v.push_back(num);
        count++;
    }
    
    cout << "Total values entered: " << count << endl;
    cout << endl << " for printing the number press <enter>";
    
    
    cin.get();

    for (int i = 0; i < v.size(); i++)
    {
        if(i>0) cout << "  ";
        cout<<v[i];
    }

    cout<<endl;
    

    return 0;
}