import static java.lang.System.out;
import java.util.*;

class Solution {

    public String solution(int[] numbers, String hand) {
        String answer = "";


        return answer;
    }

    public static void main(String[] args) {
        test();
    }

    public static void test() {
        Solution s = new Solution();
        out.println("LRLLLRLLRRL".equals(s.solution(new int[]{1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5}, "right")));
        out.println("LRLLRRLLLRR".equals(s.solution(new int[]{7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2}, "left")));
        out.println("LLRLLRLLRL".equals((s.solution(new int[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, "right"))));
    }
}
