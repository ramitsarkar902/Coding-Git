class MyThread implements Runnable {
    int x;
    public void run() {
        int n = (int) (Math.random()*10 + 1);
        System.out.println("Random Number Generated: " + n);
        this.x+=n;
    }
}

public class ex2 {
    public static void main(String[] Args) throws InterruptedException {
        MyThread[] m = new MyThread[5];
        Thread[] t = new Thread[5];

        int res=0;

        for (int i=0; i<5; i++) {
            m[i] = new MyThread();
            t[i] = new Thread(m[i]);
        }

        for (int i=0; i<5; i++) {
            t[i].start();
        }

        for (int i=0; i<5; i++) {
            try{
                t[i].join();
                res+=m[i].x;
            } catch (InterruptedException e) {
                System.out.println(e);
            }

        }

        System.out.println("Sum: " + res);
    }
}
