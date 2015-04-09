/**
 * 1287 - 할 수 있다
 * https://www.acmicpc.net/problem/1287
 * Run Time - 56 MS
 * 사칙연산 계산기 (Stack) + Big Integer
 */
import java.util.Stack;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

    private Boolean isValid;
    private	String	infix;
    private BigInteger  result;

    Stack <BigInteger>	num = new Stack <BigInteger>();
    Stack <Character>	op =  new Stack <Character>();

    Main (String str) {
        infix = str;
        isValid = isBalanced();
        if (isValid)    evaluate();
    }

    public Boolean isValid() {
        return isValid;
    }

    public Boolean isBalanced() {
        Stack <Character>    paren = new Stack <Character>();
        for (int i = 0; i < infix.length(); i++) {
            if (infix.charAt(i) == '(')    paren.push('(');
            else if (infix.charAt(i) == ')') {
                if (paren.empty()) return false;
                paren.pop();
            }   
        }   
        return paren.empty();
    }   // isBalanced()

    public BigInteger getResult() {
        return result;
    }

    private int getPriority(char ch) {
        switch (ch) {
            case '+':	// +
            case '-':	// -
                return 1;
            case '*':	// *
            case '/':	// /
                return 2;
            default:
                return 0;
        }
    }   // getPriority()

    private void evaluateStackTops() {
        if (num.size() < 2 || op.size() < 1) {
            isValid = false;
            return;
        }

        if (op.peek() == '(') return;

        BigInteger rh = num.pop();
        BigInteger lh = num.pop();

        switch (op.pop()) {
            case '+':
                num.push(lh.add(rh));
                break;
            case '-':
                num.push(lh.subtract(rh));
                break;
            case '*':
                num.push(lh.multiply(rh));
                break;
            case '/':
                if (rh.equals(BigInteger.ZERO))   isValid = false;
                else num.push(lh.divide(rh));
                break;
        }   // switch
    }   // evaluateStackTops()

    private void evaluate() {
        boolean	isPrevNum = false;
        char	ch;
        int     i, j;

        for (i = 0; isValid && i < infix.length(); i++) {
            ch = infix.charAt(i);
            if (Character.isDigit(ch)) {
                for (j = i + 1; j < infix.length(); j++) {
                    if (!Character.isDigit(infix.charAt(j))) break;
                }

                num.push(new BigInteger(infix.substring(i, j)));
                i = j - 1;
                isPrevNum = true;
            } else {
                switch (ch) {
                    case '(':
                        if (isPrevNum) isValid = false;
                        op.push(ch);
                        break;
                    case ')':
                        if (!isPrevNum) isValid = false;
                        while (isValid && !op.empty() && op.peek() != '(')
                            evaluateStackTops();
                        if (!op.empty() && op.peek() != '(')   isValid = false;
                        op.pop();
                        break;
                    case '+':
                    case '-':
                    case '*':
                    case '/':
                        if (isValid && !op.isEmpty() && getPriority(op.peek()) >= getPriority(ch))
                            evaluateStackTops();
                        op.push(ch);
                        break;
                    default:
                        isValid = false;
                        break;
                }   // switch
                isPrevNum = false;
            }
        }	// for

        while (isValid && !op.isEmpty()) evaluateStackTops();

        if (!op.isEmpty() || num.size() != 1) isValid = false;
        else result = num.pop();
    }

    public static void main(String[] args) {
        try {
            InputStreamReader   in = new InputStreamReader(System.in);
            BufferedReader  input = new BufferedReader(in);
            String  str;
            while ((str = input.readLine()) != null) {
                if (str.length() == 0)  break;

                Main  cal = new Main(str);
                if (cal.isValid()) System.out.println(cal.getResult());
                else System.out.println("ROCK");
            }   
        } catch (IOException e) {
            e.printStackTrace();
        }   
    }   // main()   
}

