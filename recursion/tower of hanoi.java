class Hanoi {

    int steps = 0;
    public long toh(int N, int from, int to, int aux) {
        if (N == 1){
            System.out.println("move disk 1 from rod "+from+" to rod "+to);
            steps++;
            return steps;
        }
            
        toh(N-1, from, aux, to);
        System.out.println("move disk "+N+" from rod "+from+" to rod "+to);
        steps++;
        return toh(N-1, aux, to, from);
    }
}