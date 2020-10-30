struct DSU
{
	int parent[n_max];
	ll size[n_max] ;

	void init(int n){

		for(int i=1;i<=n;i++){
			parent[i]=i ;
			size[i]=1 ;
		}

	}

	int find_set(int v){
	
		 if (v==parent[v])
     		   return v;
   		
   		 return parent[v] = find_set(parent[v]);

	}


	void union_sets(int a,int b){
		
		a=find_set(a) ;
		b=find_set(b) ;

		if(a!=b){
			if(size[a]<size[b]){
				swap(a,b) ;
			}

			parent[b]=a ;
			size[a]+=size[b] ;

		}
	}

};