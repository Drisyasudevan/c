package guv;

import java.util.*;
public class Sum_Natural_numbers {
   public static void main(String a[])
   {
       int n,i,sum=0;
       Scanner s=new Scanner(System.in);
       n=s.nextInt();
       for(i=0;i<=n;i++)
       {
           sum=sum+i;
       }
       System.out.print(sum);
   }
}