#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>
#include <iostream>
#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <string.h>
#include <algorithm>

#define ll long long
#define mod 1000000007 //10^9+7

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

bool dfsRec(
    vector<vector<char>> &board,
    string word,
    vector<vector<bool>> &visited,
    int wordIndex,
    int boardX,
    int boardY)
{
    if (wordIndex == word.size())
    {
        return true;
    }

    if (
        boardX >= 0 and boardX < board.size() and
        boardY >= 0 and boardY < board[0].size() and
        visited[boardX][boardY] == false and
        word[wordIndex] == board[boardX][boardY])
    {
        visited[boardX][boardY] = true;

        if (
            dfsRec(board, word, visited, wordIndex + 1, boardX - 1, boardY + 0) or
            dfsRec(board, word, visited, wordIndex + 1, boardX + 0, boardY + 1) or
            dfsRec(board, word, visited, wordIndex + 1, boardX + 1, boardY + 0) or
            dfsRec(board, word, visited, wordIndex + 1, boardX + 0, boardY - 1))
        {
            return true;
        }

        visited[boardX][boardY] = false;
    }

    return false;
}

bool isWordExist(vector<vector<char>> &board, string word)
{
    vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (word[0] == board[i][j])
            {
                if (dfsRec(board, word, visited, 0, i, j))
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{

    return 0;
}