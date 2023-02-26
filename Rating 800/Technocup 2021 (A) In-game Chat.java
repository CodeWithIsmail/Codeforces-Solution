import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int t,i,j,n,count;
        String a;

        t=scn.nextInt();
        for(i=0;i<t;i++)
        {
            count=0;
            n=scn.nextInt();
            scn.nextLine();
            a=scn.nextLine();

            for(j=a.length()-1;j>=0;j--)
            {
                if(a.charAt(j)==')') count++;
                else break;
            }

            int remain=a.length()-count;

            if(remain<count) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}