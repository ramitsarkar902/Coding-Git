import java.io.*;
import java.util.Scanner;

public class q1 {
    public static void main(String args[]) throws NumberFormatException, IOException {
        int a = 0,sum = 0;
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 10; i++) {
            System.out.println("Please Enter " + i + " Number");
            a = sc.nextInt();


            sum  += a;
        }
        System.out.println("sum = " + sum);
    }
}

