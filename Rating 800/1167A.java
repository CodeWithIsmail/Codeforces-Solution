import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int t=scn.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=scn.nextInt();
            scn.nextLine();
            String a=scn.next();

            if(n<11) System.out.println("NO");

            else if(n==11)
            {
                if(a.charAt(0)=='8') System.out.println("YES");
                else System.out.println("NO");
            }
            
            else
            {
                if(a.indexOf('8')!=-1 && n-a.indexOf('8')>=11)
                   System.out.println("YES");
                else System.out.println("NO");
            }
        }
    }
}