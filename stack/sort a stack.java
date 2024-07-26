class Main{
	public void insert(Stack<Integer> S, int i){
        if(S.size() == 0){
            S.push(i);
            return;
        }
        
        if(S.peek() > i){
            int x = S.pop();
            insert(S, i);
            S.push(x);
        }else{
            S.push(i);
        }
        
    }
    
    public Stack<Integer> sort(Stack<Integer> S) {
        
        if(S.size() == 1) return S;
        
        int x = S.pop();
        sort(S);
        
        insert(S, x);
        
        return S;
        
    }
}