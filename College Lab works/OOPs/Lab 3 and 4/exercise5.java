import java.io.*;
import java.util.Scanner;

class Point {

    private double x;
    private double y;

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }

    public boolean isEqual(Point other) {
        boolean X = this.x == other.getX();
        boolean Y = this.y == other.getY();
        return X && Y;
    }

    public double computeDistance(Point other) {
        double distance = Math.pow((Math.pow((this.x - other.getX()), 2) + Math.pow((this.y - other.getY()), 2)), 0.5);
        return distance;
    }

    public void display() {
        System.out.println("X coordinate : " + x);
        System.out.println("Y coordinate : " + y);
    }
}

public class exercise5 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        Point p1 = new Point();
        Point p2 = new Point();
        p1.display();
        p2.display();
        // p1.Setitx();
        System.out.println("input X coordinate");
        double m = in.nextDouble();
        p1.setX(m);
        // p1.setX(3.4);
        System.out.println("input y coordinate");
        double n = in.nextDouble();
        p1.setY(n);
        // p1.setY(5.6);
        p2.setX(13.4);
        p2.setY(15.6);
        p1.display();
        p2.display();
        boolean bb = p1.isEqual(p2);
        System.out.println(bb);
        double distance = p1.computeDistance(p2);
        System.out.println(distance);
    }
}

