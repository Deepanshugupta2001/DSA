#include<iostream>
#include<cstring>
using namespace std;
void printArray(int freq[]){
    for (int i = 0; i < 26 ;i++ )
    {
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    char a[10]="aabbc";
    char b[10]="abbacd";
    int len_a=strlen(a);
    int len_b=strlen(b);
    int freq[26]={0};
    for (int i = 0; i < len_a; i++)
    {
        int index=a[i]-'a';
        freq[index]++;
    }
    printArray(freq);

    for (int i = 0; i < len_b; i++)
    {
        int index=b[i]-'a';
        freq[index]--;
    }
    printArray(freq);

    bool isPermutation=true;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]!=0) {
            isPermutation=false;
            break;
        }
    }
    if(isPermutation) cout<<"Yes\n";
    else cout<<"No \n";

    return 0;
    
    
    
}