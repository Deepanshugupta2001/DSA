#include<iostream>
#include<climits>
using namespace std;
void maxfrequency(int *freq){
    int lar=INT_MIN;
    int ctr=0;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>lar){
            lar=freq[i];
            ctr=i;
            // cout<<freq[i];
        }

        // else cout<<freq[i];
    }   
    // cout<<endl; 
    // cout<<lar<<endl;
    // cout<<ctr;
    cout<<(char)(ctr+'a');
}
int main(){
    string s;
    cin>>s;
    int freq[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        int index=s[i]-'a';
        freq[index]++;
    }
    
    maxfrequency(freq);

    return 0;
}