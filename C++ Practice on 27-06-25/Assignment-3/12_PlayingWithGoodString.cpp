// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int len=0;
//     bool haikya=false;
//     for (int i = 0; i < s.size()-1; i++)
//     {
//         if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
//             if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='o' || s[i+1]=='i' || s[i+1]=='u'){
//                 haikya=true;
//                 int n=2;
//                 if(haikya) len+=max(n,len);
//                 i=i+1;
//             }
//             else if(s[i+1]!='a' || s[i+1]!='e' || s[i+1]!='o' || s[i+1]!='i' || s[i+1]!='u'){
//                 len=max(1,len);
//                 haikya=false;
//             }
//         }
//         else{
//             haikya=false;
//         }
//     }

//     cout<<len<<endl;
//     return 0;
    
// }

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=0,length=0;
    bool haikya=false;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
            if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='o' || s[i+1]=='i' || s[i+1]=='u'){
                // int n=2;
				// cout<<s[i]<<" : "<<s[i+1]<<" yeh aaya hai:- ";
                if(haikya) length+=2;
				else length=2;
				// cout<<"Length hai: "<<length<<endl;
                haikya=true;

                i=i+1;
            }
            else if(s[i+1]!='a' || s[i+1]!='e' || s[i+1]!='o' || s[i+1]!='i' || s[i+1]!='u'){
				// cout<<s[i]<<" : "<<s[i+1]<<" yeh aaya hai:- ";

                if(haikya) length++;
                else {
					length=1;
					haikya=false;
				}
				// cout<<"Length hai: "<<length<<endl;

            }
        }
        else{
            haikya=false;
			// cout<<"Yeh nhi hai: ";
			len=max(len,length);
			// cout<<"Len hai abhi: "<<len<<endl;
			length=0;
        }
    }
			len=max(len,length);
	
    cout<<len<<endl;
    return 0;
    
}