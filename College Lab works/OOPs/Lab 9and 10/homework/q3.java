package homework;

class Inventory {
    static int quantityOnHand = 500;
    static int req = 0;

    public static void request(int order) {
        synchronized (Inventory.class) {
            if (order <= quantityOnHand) {
                System.out.println("Quantity ordered :"+order);
                quantityOnHand -= order;
                req += order;
                System.out.println("Quantity on hand :"+quantityOnHand);
                System.out.println("Total quantify taken away by way of order :"+req);
            } else {
                System.out.println("Ordered quantity more than quantity on hand");
            }
            System.out.println();
        }
    }
}

class OurThread extends Thread {
    OurThread() {
        super("test thread");
        System.out.println(this);
        start();
    }

    public void run() {
        for (int i = 5; i > 0; i--) {
            try {
                sleep(100);
            } catch (InterruptedException e) {
            }
            Inventory.request((int) (Math.random() * 100));
        }
    }
}

public class q3 {
    public static void main(String args[]) {
        new OurThread();
        new OurThread();

        try {
            for (int p = 3; p > 0; p--) {
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

