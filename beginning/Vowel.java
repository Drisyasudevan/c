package gu;

import java.util.*;
public class VowelConsonants {
   public static void main(String args[]){
       char ch;
       Scanner s=new Scanner(System.in);
       ch=s.next().charAt(0);
      
       if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
            System.out.println("Vowel");
        else
            System.out.println("Consonant");

   } 
}