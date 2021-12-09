class MyThread implements Runnable {
    int x;
    public void run() {
        int n = (int) (Math.random()*10 + 1);
        System.out.println("Random Number Generated: " + n);
        this.x+=n;
    }
}

public class ex3 {
    public static void main(String[] Args) throws InterruptedException {
        MyThread m = new MyThread();
        Thread[] t = new Thread[5];

        for (int i=0; i<5; i++) {
            t[i] = new Thread(m);
        }

        for (int i=0; i<5; i++) {
            t[i].start();
        }

        for (int i=0; i<5; i++) {
            try{
                t[i].join();
            } catch (InterruptedException e) {
                System.out.println(e);
            }

        }

        System.out.println("Sum: " + m.x);
    }
}


