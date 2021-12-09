class MyThread extends Thread {
    boolean flag = false;
    public void run() {
        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        flag = true;
        System.out.println("Flag's new Value = true.");
    }
}

class busyWait extends Thread {
    long start;
    MyThread m = new MyThread();
    busyWait(MyThread m) {
        this.m = m;
    }
    public synchronized void run() {

        while(!Thread.interrupted()) {
            start = System.nanoTime();
            if(m.flag) {
                m.flag = false;
                System.out.println();
                System.out.println("Inside BusyWait 1");
                System.out.println("Flag's New Value = false.");
                System.out.println("Time for Busy Waiting (ns): " + (System.nanoTime()-start));
            }
        }
    }
}

class busyWait2 extends Thread {
    MyThread m = new MyThread();
    busyWait2(MyThread m) {
        this.m = m;
    }
    public synchronized void run() {
        System.out.println("Inside BusyWait 2");
        System.out.println("Flag's Current Value Before using wait(): " + m.flag);
        while(!m.flag) {
            try {
               wait();
            } catch (InterruptedException e) {
                System.out.println(e);
            }
            m.flag=false;
            System.out.println("Flag value has been set to false.");
        }
    }
}

public class ex1 {
    public static void main(String[] Args) throws InterruptedException {
        MyThread m1 = new MyThread();
        MyThread m2 = new MyThread();

        busyWait b1 = new busyWait(m1);
        Thread t1 = new Thread(b1);
        Thread t2 = new Thread(m1);
        t2.start();
        t1.start();

        try {
            Thread.sleep(300);
        } catch(InterruptedException e) {
            System.out.println("sleep interrupted in main()");
        }

        System.out.println();

        busyWait2 b2 = new busyWait2(m2);
        t1 = new Thread(m2);
        t2 = new Thread(b2);
        t2.start();
        t1.start();

        try {
            Thread.sleep(2000);
        } catch(InterruptedException e) {
            System.out.println("sleep interrupted in main()");
        }
        
    }
}