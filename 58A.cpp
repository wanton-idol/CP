/*Question:
Our good friend Mole is trying to code a big message. He is typing on an unusual keyboard with characters arranged in following way:
qwertyuiop
asdfghjkl;
zxcvbnm,./
Unfortunately Mole is blind, so sometimes it is problem for him to put his hands accurately. He accidentally moved both his hands with one position to the left or to the right. That means that now he presses not a button he wants, but one neighboring button (left or right, as specified in input).
We have a sequence of characters he has typed and we want to find the original message.

Input:
First line of the input contains one letter describing direction of shifting ('L' or 'R' respectively for left or right).
Second line contains a sequence of characters written by Mole. The size of this sequence will be no more than 100. Sequence contains only symbols that appear on Mole's keyboard. It doesn't contain spaces as there is no space on Mole's keyboard.
It is guaranteed that even though Mole hands are moved, he is still pressing buttons on keyboard and not hitting outside it.

Output:
Print a line that contains the original message.*/

//Code
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char v[] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char ch;
    string input,str;
    cin>>ch;
    cin>>input;
 
    if(ch == 'R'){
        for (int i = 0; i < input.size(); i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if(input[i] == v[j]){
                   str += v[j-1];
                }
            }
            
        }
        
    }else{
        for (int i = 0; i < input.size(); i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if(input[i] == v[j]){
                    str += v[j+1];
                }
            }
            
        }
    }
    cout<<str<<endl;
    return 0;
}