import java.util.*;

public class Lab2Ex1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=0;int sum=0;
        for(int i=0;i<10;i++){
            System.out.println("Please Enter " + i + " Number");
            n=sc.nextInt();
            sum+=n;
        }
        System.out.println("Sum = " + sum);

    }
}