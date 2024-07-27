
class Solution {
  public:
    
    void del(stack<int> &s, int i, int size){
        if(size/2 == i){
            s.pop();
        }else{
            int x = s.top(); s.pop();
            del(s, i+1, size);
            s.push(x);
        }
    }    
    
    void deleteMid(stack<int>& s, int sizeOfStack) {

        del(s, 0, sizeOfStack);

    }
};