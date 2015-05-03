/**
 *  9411 - 실수 계산
 *  https://www.acmicpc.net/problem/9411
 *  RunTime : 56 MS
 *  BigDecimal
 */

import java.io.*;
import java.util.*;
import java.math.*;

class Main {

    static BigDecimal   zero = new BigDecimal("0");
	
    public static void main (String args[]) {
        BigDecimal  left, right;
        try {
            InputStreamReader   in = new InputStreamReader(System.in);
            BufferedReader      input = new BufferedReader(in);
            String  str = input.readLine();
            int T = Integer.parseInt(str);
            left = new BigDecimal("0");

            while ((str = input.readLine()) != null) {
                right = new BigDecimal(str);
                if (right.equals(zero)) {
                    String result = left.toString();
                    int i;
                    for (i = result.length() - 1; result.charAt(i) == '0'; i--);
                    if (result.charAt(i) == '.')    i--;

                    System.out.println(result.substring(0, i + 1));

                    left = new BigDecimal("0");
                    T--;
                }
                if (T == 0) break;
                left = left.add(right);
            }
        } catch (IOException e) {
            ;
        }
    }
}
