//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    
    static bool comparefun(Item a, Item b){
        return (((double)a.value)/((double)a.weight)) > (((double)b.value)/((double)b.weight));
    }
    
    double fractionalKnapsack(int W, Item arr[], int n){
        
        sort(arr, arr+n, comparefun);
        
        double res = 0;
        for(int i=0; i<n && W>0;i++){
            if(W >= arr[i].weight){
                W-=arr[i].weight;
                res+=arr[i].value;
            }else{
                double f = ((double)arr[i].value)/((double)arr[i].weight);
                res += W*f;
                W = 0;
            }
        }
        
        return res;
    }
        
};