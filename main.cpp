#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(int argc, char* argv[]){
    //cdigo mas complejo
    char name[100];
    ifstream input;
    vector<string> data;
    string line;

    cout<<"filename: ";
    cin>>name;

    input.open(name);
    if(input.is_open()){
        while (getline(input, line)){
            data.push_back(line);
        }
    }

    //requiere la libreria utilyti
    vector<string> aux;
    for (int i=0; i<20; i++){
        aux=split(data[i],' ');
        for (int j=0;j<aux.size();j++){
            cout<<aux[j]<<" "
        }
    }

    //extraer un output como archivo de texto
    ofstream output;
    cout<<"output filename: ";
    cin>>name;

    output.open(name);
    if(output.is_open()){
        for (int i=0; i<data.size();i++){
           output<<data[i]<<"\n";
        }
    }

    return 0;
}
/*
    ofstream myFile;
        myFile.open(filename);
        if (myFile.is_open()){
            myFile<<count<<"\n";
            for(unit i=0;i<count; i++){
                myFile<< employees[i]->toString()<<"\n";
            }
        myFile.close();
        return true;
        }
    return false;
}
*/

}
