#include <bits/stdc++.h>

using namespace std;
int N,nSol;
char Queens[20][20];
bool withSol=false;
bool firstSol=true;

void fillQueens();
void printTable();
bool valid(int,int);
void nqueen(int);

int main(){
    cin>>N;
    fillQueens();
    nqueen(0);
    cout<<nSol;
    if(not withSol){
        cout<<"Not possible";
    }
    return 0;
}

void fillQueens(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            Queens[i][j]='-';
        }
    }
}
void printTable(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<Queens[i][j];
            if(j!=N-1) cout<<"\t";
        }
        cout<<endl;
    }
    //cout<<endl;
}
bool valid(int fil,int col){
    //columna
    for(int i=0;i<fil-1;i++){
        if(Queens[i][col]=='Q') return false;
    }
    //diagonal
    for(int i=0;i<fil-1;i++){
        if(col-fil+i>=0 and Queens[i][col-fil+i]=='Q') return false;
        if(col+fil-i<N and Queens[i][col+fil-i]=='Q') return false;
    }

    return true;
}
void nqueen(int fil){
    if(fil>=N){
        if(firstSol)firstSol=false;
        else cout<<endl;
        printTable();
        nSol++;
        withSol=true;
        return;
    }
    for(int i=0;i<N;i++){
        if(valid(fil,i)){
            Queens[fil][i]='Q';
            nqueen(fil+1);
            Queens[fil][i]='-';
        }
    }
}
