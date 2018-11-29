#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> printMatrix(vector<vector<int> > matrix) {
		vector <int> result;
		int m = matrix.size();
		int n = matrix[0].size();
		int direct = 1;
		//1→ 2↓ 3← 4↑
		int up = 1, down = m - 1, left = 0, right = n - 1;
		int i = 0, j = -1;//j++所以=-1开始
		while (up <= down || left <= right) {
			switch (direct) {//1→ 2↓ 3← 4↑
			case 1:
				direct = 2;
				if (left > right) return result;
				j++;
				while (j <= right) {
					result.push_back(matrix[i][j]);
					j++;
				}
				j--;
				right--;
				break;
			case 2:
				direct = 3;
				if (up > down) return result;
				i++;
				while (i <= down) {
					result.push_back(matrix[i][j]);
					i++;
				}
				i--;
				down--;
				break;
			case 3:
				direct = 4;
				if (left > right) return result;
				j--;
				while (j >= left) {
					result.push_back(matrix[i][j]);
					j--;
				}
				j++;
				left++;
				break;
			case 4:
				direct = 1;
				if (up > down) return result;
				i--;
				while (i >= up) {
					result.push_back(matrix[i][j]);
					i--;
				}
				i++;
				up++;
				break;
			default:
				break;
			}
		}
		return result;
	}
};

int main() {
	vector<vector<int>> matrix(1);

	int i;
	for (i = 1; i <= 5; i++) matrix[0].push_back( i);

	Solution a;
	a.printMatrix(matrix);

	return 0;
}

