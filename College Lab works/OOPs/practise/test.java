import java.util.*;

interface A{
    void show();
}

interface B extends A{
    void getName();
}

class C implements B{
    public void getName() {
        System.out.println("From B in C");
    }
    public void show(){
        System.out.println("from a in c");
    }
}
public class test extends C{
    public void display(){
        super.getName();
        super.show();
    }

public static void main(String[] args){
    test ob=new test();
    ob.display();
}
    
}
