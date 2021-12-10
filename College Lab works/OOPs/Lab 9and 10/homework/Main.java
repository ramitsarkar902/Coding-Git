package homework;

class MyClass extends Thread {

    MyClass() {
        this.start();
    }

    public void run() {
        int i=1;
        while (true) {
            System.out.println((i+1) + ". " + "Hello World!!!");
            i++;
        }
    }
}

public class Main {
    public static void main(String[] Args) {
        MyClass t1 = new MyClass();
        MyClass t2 = new MyClass();
    }
}

