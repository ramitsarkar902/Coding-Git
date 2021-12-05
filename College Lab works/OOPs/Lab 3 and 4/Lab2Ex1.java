import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Lab2Ex1{
    public static void main(String args[]){
        int number = 0;
        int sum = 0;
       
        InputStreamReader ins = new InputStreamReader(System.in);
      
        BufferedReader br = new BufferedReader(ins);
        for (int i = 0; i < 10; i++) {
            System.out.println("Please Enter " + i + " Number");
            try{
                number = Integer.parseInt(br.readLine());
            }catch(IOException e){
                System.out.println(e);
                continue;
            }
            
            sum += number;
        }
        System.out.println("Sum = " + sum);
    }
}