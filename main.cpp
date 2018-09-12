#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, char argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  for (int i = 1; i < argc; i++) {
    printf ("argv[%i]: %s\n", i, argv[i]);
  }
    char *org_str = argv[3];
    std::string string_hour(org_str , org_str + 2)；
    std::string string_minu(org_str + 3, org_str + 5);
    int hour = atoi(string_hour.c_str()); //電車の出発時間 時
    int minu = atoi(string_minu.c_str());  //電車の出発時間 分
    int first = 0;    //電車の出発駅
    int end = 0;      //電車の到着駅
    int time = 0;    //電車の移動時間
    char str[] = argv[1];
    if(str[0] == 'A'){
        if(str[1] == '1'){
            if(str[2] == '0') first = 10;
            if(str[2] == '1') first = 11;
            if(str[2] == '2') first = 12;
            if(str[2] == '3') first = 13;
            first = 1;
        }
        if(str[1] == '2') first = 2;
        if(str[1] == '3') first = 3;
        if(str[1] == '4') first = 4;
        if(str[1] == '5') first = 5;
        if(str[1] == '6') first = 6;
        if(str[1] == '7') first = 7;
        if(str[1] == '8') first = 8;
        if(str[1] == '9') first = 9;
    }else if(str[0] == 'B'){
        if(str[1] == '1') first = 18;
        if(str[1] == '2') first = 17;
        if(str[1] == '3') first = 16;
        if(str[1] == '4') first = 15;
        if(str[1] == '5') first = 14;
    }
    
    
    cout << first << end << endl;
    int b[17] = {3,5,2,3,4,3,4,2,2,3,6,2,3,2,3,3,4};
    if(first < end){
        if(first < 7 && end < 7){    //A1~A7
            time = 0;
            for(int i=first;i<end;i++){
                time+=b[i];
            }

        }
    }
    
  return 0;
}