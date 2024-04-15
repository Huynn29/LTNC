
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
int convert(string s)
{
    int k = 0;
    for(int i = 0; i <= s.size() - 1; i++)
    {
        k = k * 10 + (int(s[i])-48);
        if ((i == 0) && (s[i] == '0')) k /= 10;
    }
    return k;
}

string revert(int n)
{
    string s = "";
    while(n > 0)
    {
        s = char(n % 10 + 48) + s;
        n /= 10;
    }
    return s;
}

string timeConversion(string s)
{
    string day = s.substr(8,2);
    string hour = s.substr(0,2);
    string min = s.substr(3,2);
    string sec = s.substr(6,2);
    string ss = "";
    if ((day == "AM") && (convert(hour) == 12)) ss = "00:" + min + ":" + sec;
    else if ((day == "PM") && (convert(hour) == 12)) ss = hour + ":" + min + ":" + sec;
    else if (day == "AM") ss = hour + ":" + min + ":" + sec;
    else ss=revert(convert(hour)+12) + ":" + min + ":" + sec;
    cout << convert(hour) << " " << hour;
    return ss;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
