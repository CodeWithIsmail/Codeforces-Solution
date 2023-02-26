import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int i,t,n,j;
        String a;
        t=scn.nextInt();
        scn.nextLine();
        for(i=0;i<t;i++)
        {
            int one=0,zero=0;
            a=scn.nextLine();
            for(j=0;j<a.length();j++)
            {
                if(a.charAt(j)=='0') zero++;
                else one++;
            }
            if(one==zero) System.out.println(Math.min(zero,one)-1);
            else System.out.println(Math.min(zero,one));
        }
    }
}