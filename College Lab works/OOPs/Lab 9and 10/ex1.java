import java.util.*;
class A extends Thread {
    String name;
    A(String j){
        name=j;
    }
    public void run() {
        try{    
            for(int i = 0; i <10;i++){
                System.out.println(name+"/t"+i);
                if(name.equals("Thread 1"))
                Thread.sleep(100);
            }
        }catch(InterruptedException e){
            System.out.println(e.getMessage());
        }
    }
}


public class ex1 {
    public static void main(String[] args){
        A t1=new A("Thread 1");
        A t2=new A("Thread 2");
        t1.start();
        t2.start();
    }
    


}   
