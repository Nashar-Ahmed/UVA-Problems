#include <iostream>
2 #include <vector>
3 #include <algorithm>
4 #include <map>
5

6 struct LetterFreq
7 {
8     LetterFreq(char character)
9         : character(character),
10         freq(1)
11     { }
12
13     int freq;
14     char character;
15
16     bool operator<(const LetterFreq & other) const
17     {
18         return freq < other.freq;
19     }
20 };
21

22 using namespace std;
23

24 void SetUpFrequency(string str, vector<LetterFreq>& sortedFreq)
25 {
26     sort(str.begin(), str.end());
27     sortedFreq.clear();
28
29     sortedFreq.push_back(LetterFreq(str[0]));
30
31     int pos = 0;
32     for (int i = 1; i < str.size(); ++i)
33     {
34
35         if (str[i] != sortedFreq[pos].character)
36         {
37             sortedFreq.push_back(LetterFreq(str[i]));
38             ++pos;
39         }
40         else
41             ++sortedFreq[pos].freq;
42     }
43
44     sort(sortedFreq.begin(), sortedFreq.end());
45 }
46

47 int main()
48 {
49     int T;
50     string sep = "";
51     cin >> T;
52
53     string origional, translated;
54     vector<LetterFreq> origionalFreq, translatedFreq;
55     map<char, char> translatedToOrigional;
56     while (T--)
57     {
58         cout << sep;
59         sep = "\n";
60
61         cin >> origional >> translated;
62
63         SetUpFrequency(origional, origionalFreq);
64         SetUpFrequency(translated, translatedFreq);
65         translatedToOrigional.clear();
66
67         for (int i = 0; i < origionalFreq.size(); ++i)
68             translatedToOrigional[translatedFreq[i].character] = origionalFreq[i].character;
69
70         for (string::iterator iter = translated.begin(); iter != translated.end(); ++iter)
71         {
72             *iter = translatedToOrigional[*iter];
73         }
74
75         cout << translated << '\n';
76     }


