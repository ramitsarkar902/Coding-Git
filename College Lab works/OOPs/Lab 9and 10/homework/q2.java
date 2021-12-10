package homework;

class MyThread implements Runnable {
    String[] course = {"Java", "J2EE", "Spring", "Struts"};
    public void run() {
        for (String x: course) {
            System.out.println(x + "----->" + Thread.currentThread().getName());
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

}

public class q2 {
    public static void main(String[] Args) throws InterruptedException {
        MyThread m = new MyThread();
        Thread t1 = new Thread(m);
        t1.setName("One");
        Thread t2 = new Thread(m);
        t2.setName("Two");
        Thread t3 = new Thread(m);
        t3.setName("Three");

        t1.start();
        t2.start();
        t3.start();

        Thread.sleep(1000);
    }
}
