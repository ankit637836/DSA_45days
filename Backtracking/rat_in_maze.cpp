class Solution{
    public:
    vector<string> ans;
    bool isSafe(vector<vector<int>>& m, vector<vector<int>>& visited, int n, int x,int y){
        if(x>=0 && y>=0 && x<n && y<n && m[x][y]==1 && visited[x][y]==0){
            return true;
        }
        
        return false;
    }
    void helper(vector<vector<int>>& m, vector<vector<int>>& visited,int n, int x, int y, string temp){    
        if((x == n-1)&& (y == n-1)){
            ans.push_back(temp);
            return;
        }
        
        visited[x][y] = 1;
        if(isSafe(m,visited,n,x+1,y)){
            helper(m,visited,n,x+1,y,temp+"D");
        }
        if(isSafe(m,visited,n,x,y-1)){
            helper(m,visited,n,x,y-1,temp+"L");
        }
        if(isSafe(m,visited,n,x,y+1)){
            helper(m,visited,n,x,y+1,temp+"R");
        }
        if(isSafe(m,visited,n,x-1,y)){
            helper(m,visited,n,x-1,y,temp+"U");
        }
        visited[x][y] = 0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        if(m[0][0]==0){
            return ans;
        }
        vector<vector<int>> visited(n,vector<int>(n,0));
        helper(m,visited,n,0,0,"");
        return ans;
    }
};
