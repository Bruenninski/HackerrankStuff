
#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long  sum{0};
    //calc one round of s
    long  size = s.length();
    for(unsigned long  i{0}; i<s.length(); ++i){
        sum+=s[i%size]=='a';
    }
    //how many rounds do we have to go
    sum *= n/size;
    //add the last a's
    for(unsigned long  i{0}; i<n%size; ++i){
        sum+=s[i]=='a';
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}