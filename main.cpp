// Example program
#include <iostream>
#include <string>
using namespace std;

char buk[1000000];
int freq[1000000];
int nBuk = 0;

void stat(string text){
    for(int i=0; i<text.length(); i++){
        int j=0;
        for(; j<nBuk; j++){
            if(buk[j]==text[i]){
                freq[j]++;
                break;
            }
        }    
        if(j==nBuk){
            buk[nBuk] = text[i];
            freq[nBuk]=1;
            nBuk++;
        }
    }
}
void search2min(int& m1, int& m2){
    cout<<"search2min"<<endl;   
    m1 = 5;
    m2 = 7;
}
int createNode(int nodeId){    
    cout<<"createNode"<<endl;  
    return nodeId+1;
}
void growTree(int textLen){
    cout<<"growTree:"<<endl;
    int nodeId =nBuk;
    while(nodeId < textLen){
        int m1,m2;
        search2min(m1,m2);
        nodeId = createNode(nodeId);
    }
}
void makeAlfa(){
    cout<<"makeAlfa"<<endl;
}
void translate(){
    cout<<"translate" << endl;    
}
int main()
{ 
string text;
    //getline (std::cin, text);
    //stat(text);

    //growTree();
    //makeAlfa();
    //translate();
}
