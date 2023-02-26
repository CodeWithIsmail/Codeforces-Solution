import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int i,t,n,j;
        t=scn.nextInt();
        for(i=0;i<t;i++)
        {
            int count=0;
            n=scn.nextInt();
            int []a=new int[n];
            for(j=0;j<n;j++)
            {
                a[j]=scn.nextInt();
                if(a[j]==1 || a[j]==3) count++;
            }
            System.out.println(count);
        }
    }
}