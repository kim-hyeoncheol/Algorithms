import java.util.Stack;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	private static final	char	PLUS = '+';
	private static final	char	MINUS = '-';
	
	private static final	char	MUL = '*';
	private static final	char	DIV = '/';
	private static final	char	MOD = '%';
	
	private static final	char	POW = '^';
	
	private static final	char	FACTORIAL = '!';

	private static final	char	LEFT = '(';
	private static final	char	RIGHT = ')';
	
	private Boolean isValid;
	private	String	infix;
	private int     result;

	Stack <Integer>		num = new Stack <Integer>();
	Stack <Character>	op =  new Stack <Character>();
	
	Main (String str) {
	    isValid = true;
		infix = str.trim().replace(" ", "");
		result = evaluate();
	}

	public Boolean isValid() {
	    return isValid;
    }

    public int  getResult() {
        return result;
    }
	
	private int getPriority(char ch) {
		switch (ch) {
			case PLUS:	// +
			case MINUS:	// -
				return 1;
			case MUL:	// *
			case DIV:	// /
			case MOD:	// %
				return 2;
			case POW:	// ^
				return 3;
			case FACTORIAL:	// !
				return 5;
			default:
				return 0;
		}
	}
	
	private void evaluateStackTops() {
		if (op.peek() == LEFT) {
			return;
		}
		
		if (num.size() < 2 || op.size() < 1) {
			//while (!num.isEmpty()) {
			//	num.pop();
			//}
			while (!op.isEmpty()) {
				op.pop();
			}
			isValid = false;
			return;
		}
		
		int	operand2 = num.pop();
		int	operand1 = num.pop();
		
		switch (op.pop()) {
			case PLUS:
				num.push(operand1 + operand2);
				break;
			case MINUS:
				num.push(operand1 - operand2);
				break;
			case MUL:
				num.push(operand1 * operand2);
				break;
			case DIV:
				num.push(operand1 / operand2);
				break;
			case MOD:
				num.push(operand1 % operand2);
				break;
			case POW:
				int tmp = 1;
				for (int i = 0; i < operand2; i++)
					tmp *= operand1;
				num.push(tmp);
				break;
		}
	}
	
	private int evaluate() {
		
		char	ch;
		int		sign = 1;
		int		cur = 0;
		boolean	isNum = false;
		
		for (int i = 0; i < infix.length(); i++) {
			
			ch = infix.charAt(i);
			
			switch (ch) {
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					isNum = true;
					cur = cur * 10 + ch -'0';
					break;
				case LEFT:
					if (isNum) {
						num.push(sign * cur);
						isNum = false;
						sign = 1;
						cur = 0;
					}
					op.push(ch);
					break;
				case RIGHT:
					if (isNum) {
						num.push(sign * cur);
						isNum = false;
						sign = 1;
						cur = 0;
					}
					while (op.peek() != LEFT) {
						evaluateStackTops();
					}
					op.pop();
					break;
				case PLUS:
				case MINUS:
				case MUL:
				case DIV:
				case POW:
				case MOD:
					if (isNum) {
						num.push(sign * cur);
						isNum = false;
						sign = 1;
						cur = 0;
					}
					if (!op.isEmpty() && getPriority(op.peek()) >= getPriority(ch)) {
						evaluateStackTops();
					}
					op.push(ch);
					break;
			}
		}	// for
		
		if (isNum) {
			num.push(sign * cur);
		}
		
		while (!op.isEmpty()) {
			evaluateStackTops();
		}
		
		if (num.isEmpty()) {
		    isValid = false;
			return 0;
		} else {
			return num.pop();
		}
	}

    public static void main(String[] args) {
        try {
            InputStreamReader   in = new InputStreamReader(System.in);
            BufferedReader  input = new BufferedReader(in);

            String  str;

            while ((str = input.readLine()) != null) {
                if (str.length() == 0)  break;

                Main  cal = new Main(str);
                if (cal.isValid()) {
                    System.out.println(cal.getResult());
                } else {
                    System.out.println("ROCK");
                }
            }   
        } catch (IOException e) {
            e.printStackTrace();
        }   
    }   
}

