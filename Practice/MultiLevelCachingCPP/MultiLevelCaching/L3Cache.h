#pragma once
#include "Cache.h"
#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <string>
using namespace std;

class L3Cache: public Cache
{
    L3Cache(int capacity, int readTime, int writeTime, Cache* nextLevel = nullptr);

    void virtual insertInCache(string key, string value);

    string virtual readKey(string key);

    void virtual writeKey(string key, string value);
};
