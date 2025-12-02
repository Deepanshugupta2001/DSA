#include<iostream>
#include<cstring>
using namespace std;
void printFreq(int *freq){
    for (int i = 0; i < 26; i++)
    {
        cout<<freq[i]<<" : ";
    }
    cout<<endl;
    
}
int main(){
    char a[1000],b[1000];
    cin>>a>>b;
    int len_a=strlen(a);
    int len_b=strlen(b);
    int freq[26]={0};
    for (int i = 0; i < len_a; i++)
    {
        int idx=a[i]-'a';
        freq[idx]++;
    }
    printFreq(freq);
    for (int i = 0; i < len_b; i++)
    {
        
        int index=b[i]-'a';
        freq[index]--;
    }
    printFreq(freq);

    bool isPermutation=true;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]!=0) {
            isPermutation=false;
            break;}

    }
    if(isPermutation) cout<<"Haan ,Permutation hai";
    else cout<<"Nahi hai permutation";
    
    return 0;    
}