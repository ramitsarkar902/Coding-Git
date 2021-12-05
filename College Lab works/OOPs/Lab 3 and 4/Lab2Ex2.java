import java.io.*;
public class Lab2Ex2 {
    public static void main(String args[]){
        String name="";
        int age=0;
        double marks_in_phy=0.0;
        double marks_in_chem=0.0;
        double marks_in_maths=0.0;
        double average_marks=0.0;

        String final_grade="";

        InputStreamReader ins=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(ins);

        try{
        System.out.println("Enter name:");
        name=br.readLine();
        System.out.println("Enter age:");
        age=Integer.parseInt(br.readLine());
        System.out.println("Enter marks in physics:");
        marks_in_phy=Double.parseDouble(br.readLine());
        System.out.println("Enter marks in chemistry:");
        marks_in_chem=Double.parseDouble(br.readLine());
        System.out.println("Enter marks in maths:");
        marks_in_maths=Double.parseDouble(br.readLine());
        }catch(IOException e){
            System.out.println(e);
        }
        average_marks = (marks_in_phy + marks_in_chem + marks_in_maths) / 3.0;
        if(average_marks >= 90.00)final_grade ="A++";
        else if(average_marks>=80 && average_marks<90) {
            final_grade = "A+";
        } else if(average_marks>=70 && average_marks<80) {
            final_grade = "A";
        } else if(average_marks>=60 && average_marks<70) {
            final_grade = "B++";
        } else if(average_marks>=50 && average_marks<60) {
            final_grade = "B+";
        } else if(average_marks>=40 && average_marks<50) {
            final_grade = "B";
        } else if(average_marks>=35 && average_marks<40) {
            final_grade = "C";
        } else {
            final_grade = "fail";
        }

        System.out.println(" Name of Student : " + name);
        System.out.println(" Age of Student : " + age);
        System.out.println(" Marks in Physics : " + marks_in_phy);
        System.out.println(" Marks in Chemistry : " + marks_in_chem);
        System.out.println(" Marks in Maths : " + marks_in_maths);
        System.out.println(" Average Marks : " + average_marks);
        System.out.println(" Final Grade : " + final_grade);
    }
}
