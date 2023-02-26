import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int check=0;
        scn.nextLine();
        
        for(int i=0;i<n;i++)
        {
            String a=scn.next();
            int b=scn.nextInt();
            int c=scn.nextInt();
            if(b>=2400 && c>b) check=1;
        }
        
        if(check==0) System.out.println("NO");
        else System.out.println("YES");
    }
}