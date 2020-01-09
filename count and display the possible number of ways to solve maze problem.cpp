//count and display the possible number of ways to solve maze problem
    
#include <iostream>
using namespace std;
void MazePath(int endrow, int endcol, int curr_row, int curr_col, string osf) {

	if(curr_row == endrow and curr_col == endcol) {
		cout<<osf<<" ";
		return ;
	} 
	if(curr_row>endrow or curr_col>endcol) {
		return ;
	}

	MazePath(endrow, endcol, curr_row+1, curr_col, osf+"V");
	MazePath(endrow, endcol, curr_row, curr_col+1, osf+"H");
}
int countMazePath(int endrow, int endcol, int curr_row, int curr_col) {
	if(curr_row == endrow and curr_col == endcol) {
		return 1;
	} 
	if(curr_row>endrow or curr_col>endcol) {
		return 0;
	}

	int r_result = countMazePath(endrow, endcol, curr_row+1, curr_col);
	int h_result = countMazePath(endrow, endcol, curr_row, curr_col+1);
	return r_result+h_result;
}

int main()
{
	int n,m;
	cin>>n>>m;
	MazePath(n-1, m-1, 0, 0, "");
	cout<<endl;
	countMazePath(n-1,m-1,0,0);
}
