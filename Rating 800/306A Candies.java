import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int n,m,i;
        n=scn.nextInt();
        m=scn.nextInt();

        for(i=0;i<n%m;i++)
            System.out.print(n/m+1+" ");
        
        for(i=0;i<m-n%m;i++)
            System.out.print(n/m+" ");
    }
}