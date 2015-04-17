/**
 * BinInteger 로 사칙연산 하기
 */
import java.math.BigInteger;

public class BinIntegerUsage {

    public static void main(String[] args) {
		BigInteger	a = new BigInteger("1234567890123456789012345678901234567890");

		System.out.println(a);
		System.out.println(a.add(BigInteger.ONE));
		System.out.println(a.subtract(BigInteger.ONE));
		System.out.println(a.multiply(BigInteger.TEN));
		System.out.println(a.divide(BigInteger.TEN));
    }   // main()   
}

