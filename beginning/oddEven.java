package gu;

import java.util.*;
public class OddEven {
    public static void main(String args[]){
    int n;
    Scanner s=new Scanner(System.in);
    n=s.nextInt();
    if(n!=0){
    if(n%2==0)
    {
        System.out.print("Even");
    }
    else
    {
      System.out.print("Odd");  
    }}
    else
    {
    System.out.print("Zero");  
    }
}
}