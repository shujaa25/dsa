class Solution{
public:

    void insert(stack<int> &st, int x){
        if(st.size() == 0){
            st.push(x);
        }else{
            int i = st.top(); st.pop();
            insert(st, x);
            st.push(i);
        }
    }

    void Reverse(stack<int> &st){
        if(st.size() == 1) return;
        
        int x = st.top(); st.pop();
        Reverse(st);
        
        insert(st, x);
    }
};