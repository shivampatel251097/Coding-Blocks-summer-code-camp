//count and display the possible number of ways to solve maze problem
    
#include <iostream>
using namespace std;
void MazePath(int endrow, int endcol, int curr_row, int curr_col, string osf) {

	if(curr_row==endrow and curr_col==endcol){
	    cout<<osf<<" ";
		return ;
	}
	if(curr_row>endrow or curr_col>endcol)return ;
	MazePath(endrow,endcol,curr_row+1,curr_col,osf+"V");
	MazePath(endrow,endcol,curr_row,curr_col+1,osf+"H");
	if(curr_col==curr_row or curr_row+curr_col==endrow-1){
		MazePath(endrow,endcol,curr_row+1,curr_col+1,osf+"D");
	}
}
int countmazepath(int endrow,int endcol,int curr_row,int curr_col){
	if(curr_row==endrow and curr_col==endcol)return 1;
	if(curr_row>endrow or curr_col>endcol)return 0;
	int r_result=countmazepath(endrow,endcol,curr_row+1,curr_col);
	int h_result=countmazepath(endrow,endcol,curr_row,curr_col+1);
	int d_result=0;
	if(curr_col==curr_row or curr_row+curr_col==endrow-1){
		d_result=countmazepath(endrow,endcol,curr_row+1,curr_col+1);
	}
	return r_result+h_result+d_result;
}

int main()
{
	int n,m;
	cin>>n>>m;
	MazePath(n-1, m-1, 0, 0, "");
	cout<<endl;
	countmazepath(n-1,m-1,0,0);
}
