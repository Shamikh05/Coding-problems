import java.math.BigInteger;
import java.util.Scanner;


public class Virat_and_Factorials {

    static BigInteger fact(int n) {

        BigInteger b = new BigInteger("1");

        if(n==1) {
            return BigInteger.valueOf(1);
        }
        return BigInteger.valueOf(n).multiply(fact(n-1));
    }

	public static void main(String[] args) {

	    Scanner sc = new Scanner(System.in);

	    int n = sc.nextInt();

	    BigInteger answer = fact(n);

	System.out.println(answer);
	}
}
