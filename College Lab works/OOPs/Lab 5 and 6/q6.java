import java.util.*;
class Member{
    String name;
    int age;
    String phoneno;
    String Address;
    int salary;
    void printsalary(int salary)
    {
        System.out.println("Salary is "+salary);
    }
}
class employee extends Member{
    String department;
    String specialization;

}
class manager extends Member{
    String department;
    String specialization;

}
public class q6 {
    public static void main(String[] args) {
        employee rtf=new employee();
        rtf.name="Rakesh Sharma";
        rtf.age=27;
        rtf.phoneno="9847361205";
        rtf.Address="Near M.G. Road Indore";
        rtf.salary=90000;
        System.out.println("For Employee "+rtf.name);
        rtf.printsalary(rtf.salary);
        System.out.println(rtf.age);
        System.out.println(rtf.phoneno);
        System.out.println(rtf.Address);
        System.out.println();
        System.out.println();

        manager fgh=new manager();
        fgh.name="Saksh Arora";
        fgh.age=42;
        fgh.phoneno="8963014782";
        fgh.Address="Near AB road Aligarh";
        fgh.salary=120000;
        System.out.println("For manager "+fgh.name);
        fgh.printsalary(fgh.salary);
        System.out.println(fgh.age);
        System.out.println(fgh.phoneno);
        System.out.println(fgh.Address);
        fgh.printsalary(fgh.salary);
    }
}