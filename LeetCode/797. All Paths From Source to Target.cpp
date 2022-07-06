
 void dfs(vector<vector<int>>&graph,vector<vector<int>>&ans, vector<int>&path,int curr){
        
        path.push_back(curr);
        
        if(curr==graph.size()-1){
            ans.push_back(path);
            path.pop_back();
            return;
        }
        
        else{
            for(auto i:graph[curr]){
                dfs(graph,ans,path,i);
            }
            path.pop_back();
        }
        
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>path;
        dfs(graph,ans,path,0);
        
        return ans;
        
    }