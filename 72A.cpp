/*Question: 
Is it rated?

Here it is. The Ultimate Question of Competitive Programming, Codeforces, and Everything. And you are here to answer it.

Another Codeforces round has been conducted. No two participants have the same number of points. For each participant, from the top to the bottom of the standings, their rating before and after the round is known.

It's known that if at least one participant's rating has changed, then the round was rated for sure.

It's also known that if the round was rated and a participant with lower rating took a better place in the standings than a participant with higher rating, then at least one round participant's rating has changed.

In this problem, you should not make any other assumptions about the rating system.

Determine if the current round is rated, unrated, or it's impossible to determine whether it is rated of not.

Input:
The first line contains a single integer n (2 ≤ n ≤ 1000) — the number of round participants.

Each of the next n lines contains two integers ai and bi (1 ≤ ai, bi ≤ 4126) — the rating of the i-th participant before and after the round, respectively. The participants are listed in order from the top to the bottom of the standings.

Output:
If the round is rated for sure, print "rated". If the round is unrated for sure, print "unrated". If it's impossible to determine whether the round is rated or not, print "maybe".
*/

//Code
#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool comp(int x, int y){ 
    return x > y;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a,b,count=0;
    vector<int>v,v1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(abs(a-b) != 0){
            count++;
        }
        v.push_back(a);
        v1.push_back(b);
    }
    //sort(v1.rbegin(), v1.rend());                    sorting in descending order using reverse iterators
    //sort(v1.begin(), v1.end(), greater<int>());      sorting in descending order using greater<int>()
    sort(v1.begin(), v1.end(), comp);
    if(count>0){
        cout<< "rated"<<"\n";
    }else if(v==v1){
        cout<< "maybe"<<"\n";
    }
    else{
        cout<< "unrated"<<"\n";
    }  
    
    return 0;
}