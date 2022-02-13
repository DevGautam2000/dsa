#include <bits/stdc++.h>
using namespace std;
using namespace filesystem;

string parse(string unparsed)
{

    string default_path = "dsa-cpp";
    const char separator = '/';
    vector<string> outputArray;
    stringstream streamData(unparsed);
    string val;
    while (getline(streamData, val, separator))
        outputArray.push_back(val);

    int st;
    int end;
    for (int i = 0; i < outputArray.size(); i++)
        if (outputArray[i] == default_path)
        {

            st = i;
            end = outputArray.size() - 1;
        }

    string path = "";
    if (end - st == 0)
        path += "./";
    for (int i = st; i < end; i++)
        path += "../";
    outputArray.clear();
    return path;
}