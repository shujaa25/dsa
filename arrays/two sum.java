class Solution {

    class Element implements Comparable<Element>{
        int num;
        int ind;
        Element(int num, int ind){
            this.num = num;
            this.ind = ind;
        }

        public int compareTo(Element et){
            if(num == et.num) return 0;
            else if(num > et.num) return 1;
            else return -1;
        }
    }

    public int[] twoSum(int[] nums, int target) {
        
        Element[] eles = new Element[nums.length];
        for(int i=0;i<nums.length;i++){
            eles[i] = new Element(nums[i], i);
        }

        Arrays.sort(eles);

        int i = 0;
        int j = nums.length-1;

        while(i<j){
            int x = eles[i].num+eles[j].num;
            if(x == target) break;
            else if(x > target) j--;
            else i++;
        }

        return new int[] {eles[i].ind, eles[j].ind};

    }
}