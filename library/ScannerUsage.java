import java.util.Scanner;
import java.math.BigInteger;

public class ScannerUsage {

    public static void main(String args[]) {
        // Scanner Sample
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.nextLine();
        System.out.println(n + "\n" + s);

        // Scanner 는 BigInteger 도 지원한다.
        //Scanner sc = new Scanner(System.in);
        BigInteger a = sc.nextBigInteger();
        BigInteger b = sc.nextBigInteger();
        BigInteger sum = a.add(b);
        System.out.println(sum.toString());
    }
}
