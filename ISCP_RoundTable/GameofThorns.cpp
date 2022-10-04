#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    int flag=1;
    int oddCnt=0;
    int letterCnt[26]={};
    for(int i=0;i<s.length();i++){
        letterCnt[int(s[i])-int('a')]++;
    }
    for (int i=0;i<26;i++){
        oddCnt+=letterCnt[i]%2;
    }
    if(oddCnt>1){
        flag=0;
    }
    if(flag==0){
        return ("NO");
    }
    else{
        return ("YES");
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
