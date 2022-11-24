#include <iostream>
#include <string>
using namespace std;
int main(){
    int max=0, Mapbt[26] = {0,}, apbt;

    bool isMul = false;
    string str;
    cin>>str;
    for(int i =0; i<str.length(); i++){
        if(str[i] - 'Z' <= 0 ){
            Mapbt[str[i] - 'A']++;
        }

        else
            Mapbt[str[i] - 'a']++;
    }

    for(int i = 0; i<26; i++){
        if(Mapbt[i] > max){
            max = Mapbt[i];
            isMul = false;
            apbt = i;
        }

        else if(Mapbt[i] == max)
            isMul = true;
    }

    if(isMul==1)
        cout<<'?';

    else
        cout<<char(apbt + 65);

    return 0;
}