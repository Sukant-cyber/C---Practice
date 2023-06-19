#include <bits/stdc++.h> 
#include<iostream>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(zeroMatrix[i][j]==0){
				
				for(int k=i;k<=i;k++){
					for(int l=j;l<=j;j++){
						zeroMatrix[k][l]=0;
					}
				}
				for(int m=j;m<=j;k++){
					for(int n=i;n<=i;j++){
						zeroMatrix[m][n]=0;
					}
				}
			}
			
			}
		}
	}
}
