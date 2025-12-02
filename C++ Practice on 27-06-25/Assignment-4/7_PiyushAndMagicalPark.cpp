#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int k;
    cin>>k;
    int s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    bool haikya=false;
    int i=0;
    while(i<n)
    {
        // cout<<"Now s is: "<<s<<endl;

        if(haikya!=true){
            for (int j = 0; j < m; j++)
            {
                if(s>=k){
                    if(a[i][j]=='.' and j!=m-1){
                        s-=3;
                        // cout<<". aaya hai "<<endl;

                        // cout<<"Now s is: "<<s<<endl;
                        // cout<<"("<<i<<","<<j<<")"<<endl<<endl;
                    }
                    else if(a[i][j]=='.' and j==m-1){
                        s-=2;
                        // cout<<". aaya hai "<<endl;
                        // cout<<"Now s is: "<<s<<endl;
                        // cout<<"("<<i<<","<<j<<")"<<endl<<endl;
                        i++;


                    }
                    else if(a[i][j]=='*' and j!=m-1) {
                        // cout<<"* aaya hai "<<endl;
                        s+=4;
                        // cout<<"Now s is: "<<s<<endl;
                        // cout<<"("<<i<<","<<j<<")"<<endl<<endl;

                    }
                    else if(a[i][j]=='*' and j==m-1) {
                        // cout<<"* aaya hai "<<endl;
                        s+=5;
                        // cout<<"Now s is: "<<s<<endl;
                        // cout<<"("<<i<<","<<j<<")"<<endl<<endl;
                        i++;
                        
                    }
                    else if(a[i][j]=='#') {
                        // cout<<"Aya hai #"<<endl;
                        // cout<<"Now i is: "<<i<<endl;
                        // cout<<"Now s is: "<<s<<endl;
                        // cout<<"("<<i<<","<<j<<")"<<endl<<endl;
                        i++;
                        break;
                    }

                    // else if(j==m-1 and i<n){
                    //     s=s-1;
                    //     i++;
                        // cout<<"Now s is: "<<s<<endl;
                        // cout<<"("<<i<<","<<j<<")"<<endl<<endl;

                    // }
                }
                else {
                    haikya=true;
                    break;
                }
            }
        }
        else break;
    }

    if(haikya==false){
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
    else cout<<"No"<<endl;
    
    return 0;
}