#include <bits/stdc++.h>

using namespace std;

#define MAXN 55

struct node {
    int x;
    int y;
    int level;
    node() : x(0), y(0), level(0) {}
    node(int a, int b, int c) : x(a), y(b), level(c) {}
};

bool visited[MAXN][MAXN];
queue<node> Q;
int dx[] = {0, 1};
int dy[] = {1, 0};
int n;
void init() {
    while(!Q.empty()) Q.pop();
}

struct PathGameDiv2 {
    int bfs(int x, int y, int X, int Y, int level) {
        init();
        Q.push(node(x, y, 0));
        visited[x][y] = true;
        while(!Q.empty()) {
            if(Q.front().x == X and Q.front().y == Y) return Q.front().level;
            int level = Q.front().level;
            for(int i = 0; i < 2; ++i) {
                int xx = x + dx[i], yy = y + dy[i];
                if(xx >= 2 or xx < 0 or yy < 0 or yy >= n or board[xx][yy] == '#' or visited[xx][yy]) continue;
                visited[xx][yy] = true;
                Q.push(xx, yy, level + 1);
            }
            Q.pop();
        }
        return -1;
    }
	int calc(vector <string> board)  {
		n = board[0].size();
		int result = 2 * n;
		for(int i = 0; i < 2; ++i) {
            for(int j = 0; j < n; ++j) {
                if(board[i][j] == '#') result--;
            }
		}

	}
};
// BEGIN CUT HERE
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cout << "Testing PathGameDiv2 (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1414477062;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		PathGameDiv2 _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string board[] = {"#...."
				                 ,"...#."};
				_expected = 2;
				_received = _obj.calc(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			case 1:
			{
				string board[] = {"#"
				                 ,"."};
				_expected = 0;
				_received = _obj.calc(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			case 2:
			{
				string board[] = {"."
				                 ,"."};
				_expected = 1;
				_received = _obj.calc(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			case 3:
			{
				string board[] = {"....#.##.....#..........."
				                 ,"..#......#.......#..#...."};
				_expected = 13;
				_received = _obj.calc(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			/*case 4:
			{
				string board[] = ;
				_expected = ;
				_received = _obj.calc(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}*/
			/*case 5:
			{
				string board[] = ;
				_expected = ;
				_received = _obj.calc(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string board[] = ;
				_expected = ;
				_received = _obj.calc(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
