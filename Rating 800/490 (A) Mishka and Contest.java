import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int n,k,i,count=0;

        n=scn.nextInt();
        k=scn.nextInt();
        int []a=new int[n];

        for(i=0;i<n;i++) a[i]=scn.nextInt();

        for(i=0;i<n;i++)
        {
            if(a[i]<=k)
            {
                count++;
                a[i]=k+1;
            }
            else break;
        }

        for(i=n-1;i>=0;i--)
        {
            if(a[i]<=k) count++;
            else break;
        }

        System.out.println(count);
    }
}