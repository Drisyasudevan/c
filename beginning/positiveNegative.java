package gu;
import java.util.*;
public class PositiveNegative {
    public static void main(String args[]){
       
    double number;
 Scanner scan=new Scanner(System.in);
    number=scan.nextDouble();

    if (number <= 0.0)
    {
        if (number == 0.0)
           System.out.print("Zero");
        else
            System.out.print("Negative");
    }
    else
        System.out.print("Positive"); 
    }
}