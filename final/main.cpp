#include <iostream>
#include <cstring>
#include<conio.h>
//#include<string>
//#include<bits/stdc++.h>

//#define CH 8
using namespace std;
//Task 3_char by char:
int main()
{
    int CH=8;
    int i=0;
    char str[CH+1];
    cout<<"enter ur characters, to stop press enter" <<endl;

    do{
        str[i]=getche();
        if(str[i]=='\r'){
            str[i]='\0';
            cout <<endl;
            break;
        }
        i++;
    }while(strlen(str)<CH);

    if(strlen(str)==CH)
            cout<<"\n maximum length has been reached"<< endl;

    cout <<" the string is "<< str;
    /*
    //char ch,arrCh[CH];
    char ip_ch[5], arrCh[CH]="";
    string str="";
    cout <<"please enter u char" << endl;
    cin >> ip_ch[0];
    ip_ch[0] = arrCh[0];
    if (int(ip_ch[0]) == 13 || strlen(arrCh)<=CH){
         for(int i=0;i<CH;i++){
            arrCh[i]=ip_ch[i+1];
            str += arrCh[i];
        }
       // str += std::to_string(arrCh);
        cout<<"\n the string is" << str;
    }

    else
         cout <<"\n u entered the char" << endl;
*/
    return 0;
}
