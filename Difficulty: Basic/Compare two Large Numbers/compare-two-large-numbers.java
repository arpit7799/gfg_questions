import java.math.BigInteger;

class Solution {
    int check(String a, String b) {
        BigInteger num1 = new BigInteger(a);
        BigInteger num2 = new BigInteger(b);

        if (num1.compareTo(num2) > 0) {
            return 2;
        } else if (num1.compareTo(num2) == 0) {
            return 3;
        } else {
            return 1;
        }
    }
}