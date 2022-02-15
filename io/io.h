#pragma once
#include "parser.h"
#include "templates/display.h"
#include "templates/debug.h"
#include "templates/input.h"
#include "templates/algo.h"
#include "templates/listnode.h"
#include "templates/treenode.h"
#include <bits/stdc++.h>

using namespace std;
using namespace tn;
using namespace debugger;
using namespace console;
using namespace input;
using namespace algo;
using namespace ln;

void io() {
#ifndef ONLINE_JUDGE

  freopen("/Users/gautamsaha/Desktop/dsa/dsa-cpp/io/input.txt", "r", stdin);
  freopen("/Users/gautamsaha/Desktop/dsa/dsa-cpp/io/output.txt", "w", stdout);
  freopen("/Users/gautamsaha/Desktop/dsa/dsa-cpp/io/debug-error.txt", "w", stderr);


#endif
}
void io(string path) {
  string finalpath = parse(path);
#ifndef ONLINE_JUDGE
  string inp = finalpath + "io/input.txt";
  string out = finalpath + "io/output.txt";
  string err = finalpath + "io/debug-error.txt";

  freopen(inp.c_str(), "r", stdin);
  freopen(out.c_str(), "w", stdout);
  freopen(err.c_str(), "w", stderr);

#endif
}
