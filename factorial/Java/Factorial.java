package factorial.Java;

/**
 * Factorial
 */
public class Factorial {

    public static void main(String[] args) {
        System.out.println(factorialR(6));
    }
    static int factorialR(int n){
        return n<2?1:n*factorialR(n-1);
    }
}