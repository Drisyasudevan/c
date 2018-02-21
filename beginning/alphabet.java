package gu;
import java.util.*;
public class Alphabet {
    public static void main(String args[])
    {
        char ch;
        Scanner s=new Scanner(System.in);
        ch=s.next().charAt(0);
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            System.out.println("Alphabet.");
        else
            System.out.println("No");
    }
}