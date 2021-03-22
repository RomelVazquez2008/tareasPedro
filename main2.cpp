#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main (int argc, char* argv[]){
    string  word;
    int iteraciones=0;

    while (cin>>word){
        cout<<word;
        iteraciones++;
        if(iteraciones==4){
            getline(cin,word);
            cout<<word<<endl;
            iteraciones=0;
        }
    }
    return 0;
}
