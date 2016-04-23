#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

struct ascii_freq
{
int ascii;
int freq;
};

bool compare (const ascii_freq &a, const ascii_freq &b)
{
if(a.freq != b.freq)
return a.freq < b.freq;

return a.ascii > b.ascii;
}

int main()
{
// freopen("input.txt", "r", stdin);

bool firsttime = true;
char line[1001];
int i;
vector<ascii_freq> V;

while(gets(line))
{
if(!firsttime)
puts("\n");
int address[128];
int vindex = 0;
memset(address, -1, sizeof(address));

for(i=0; line[i]!=0; i++)
{
if(address[line[i]] == -1)
{
ascii_freq temp;
temp.ascii = line[i];
temp.freq = 1;
V.push_back(temp);
address[line[i]] = vindex;
vindex++;
}
else
{
V[address[line[i]]].freq++;
}
}
sort(V.begin(), V.end(), compare);
for(i=0; i<V.size(); i++)
{
printf("%d %d", V[i].ascii, V[i].freq);
if(i < V.size()-1)
puts("");
}

V.clear();
firsttime = false;
}
return 0;
}
