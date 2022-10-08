
#include<bits/stdc++.h>

#include<iostream>

using namespace std;
//topological sort by using khan's algorithm (BFS approch for toposort)
vector<int> findOrder(int V, vector<vector<int>>& a) {
        
        
        
        vector<int>adj[V+1];
        //making the directed graph (since course a[i][1] is required for doing the course a[i][0] so we make the graph direceted
        for(int i=0;i<a.size();i++){
            
            
            adj[a[i][1]].push_back(a[i][0]);
        }
        
        
        //this vector willl tell the indegree of each vertices
        vector<int>indegree(V,0);
	    
        //interating over the adjacency list and preparing the indegree vector
	    for(int i=0;i<V;i++){
	        
	        
	        for(auto it : adj[i]){
	            
	            indegree[it]++;
	        }
	    }
	    
        //pushing all the vertices having 0  indegree( because those vertices having 0 degree will not depend on anyy other vertices so they can appear on top in toposort)
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        
	        if(indegree[i]==0){
	            
	            q.push(i);
	        }
	    }
	    
        //applying bfs
	    vector<int>v;
	    while(!q.empty()){
	        
	        
	        
	        
	        int x=q.front();
	        v.push_back(x);
	        q.pop();
	        //iterating all the connected of the node 
	        for(auto it : adj[x]){
	             
                 // go on the child node and decrese its indegree (break the bond between parent and child)
	            indegree[it]--;
                //if any vertices found having zero degree than push it in the queue(not depend on any node now)
	            if(indegree[it]==0)q.push(it);
	        }
	        
	        
	    }

        //this is used for detecting the cycle(because if cycle is present in the graph so any node in the graph will not have degree zero so no node will go inside the queue so our ans size willl not be equal to  the number if vertices)
	    if(v.size()!=V){
            
            return {};
        }
	    return v;
    }

