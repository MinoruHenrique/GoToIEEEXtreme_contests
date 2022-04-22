#include <bits/stdc++.h>
using namespace std;

const char WORD[7] ={'I','E','H','O','V','A','#'};
char Cobble[15][15];
int m,n;

void printPath(string*,int);
bool valid(int,int,int);
void pathSolve(int,int,int,string*);

int main(){
    int t;cin>>t;
    int posX,posY;
    while(t--){
        cin>>m>>n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                char chara;cin>>chara;
                Cobble[i][j]=chara;
                if(chara=='@'){
                    posX=j;
                    posY=i;
                }
            }
        }
        string pathA[10];//7 elementos 
        cout<<posX<<" "<<posY<<endl;
        pathSolve(posX,posY,0,pathA);


        //resetCobble();
    }
    return 0;
}
/*
void resetCobble(){
    //Reinicia el array
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            Cobble[i][j]=0;
        }
    }
}
*/
void printPath(string *path,int n){
    for(int i=0;i<n;i++){
        cout<<path[i];
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
}
bool valid(int posX,int posY,int wordIdx){
    if(posX<0 or posX>=n or posY<0){
        return false;
    }
    if(Cobble[posY][posX]==WORD[wordIdx]) return true;
    else return false;
}

void pathSolve(int posX,int posY,int wordIdx, string *pathA){
    //posX, posY: posición actual en el array
    //wordIdx: índice del caracter actual buscado (ej: 0 => 'I',1 => 'E')
    if(Cobble[posY][posX]=='#'){
        printPath(pathA,7);
        return;
    }
    //left
    if(valid(posX-1,posY,wordIdx)){
        pathA[wordIdx]="left";
        pathSolve(posX-1,posY,wordIdx+1,pathA);
        pathA[wordIdx]=' ';
    }
    //forth
    if(valid(posX,posY-1,wordIdx)){
        pathA[wordIdx]="forth";
        pathSolve(posX,posY-1,wordIdx+1,pathA);
        pathA[wordIdx]=' ';
    }
    //right
    if(valid(posX+1,posY,wordIdx)){
        pathA[wordIdx]="right";
        pathSolve(posX+1,posY,wordIdx+1,pathA);
        pathA[wordIdx]=' ';
    }
}