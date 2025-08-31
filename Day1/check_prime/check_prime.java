import java.util.Scanner;

public class check_prime {
    public static void main(String[] args) {
        System.out.println("Enter a Number");
        try (Scanner sc = new Scanner(System.in)) {
            int num = sc.nextInt();
            boolean isPrime = isPrime(num);

            if (isPrime)
                System.out.println(num + " is Prime");
            else
                System.out.println(num + " is not Prime");
        }
    }

    public static boolean isPrime(int num) {
        if (num <= 1)
            return false;
        if (num == 2)
            return true;
        if (num%2 == 0)
            return false;
        for (int i = 3; i <= Math.sqrt(num); i += 2) {
            if (num%i == 0)
                return false;
        }
        return true;
    }
}
