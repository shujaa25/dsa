class Solution{

    private static void perm(String s, int i){
        
        if(i >= s.length()-1){
            System.out.println(s);
            return;
        }

        perm(s, i+1);

        StringBuilder stringBuilder = new StringBuilder(s);
        stringBuilder.insert(i+1, " ");

        perm(stringBuilder.toString(), i+2);

    }

    public static void main(String[] args){

        String s = "abc";

        perm(s, 0);

    }
}