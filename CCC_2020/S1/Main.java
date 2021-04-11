package CCC_2020.S1;//remove package, I'm just annoyed my IDE throws errors
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] sd=new int[n][2];
        for(int i=0;i<n;i++){
            sd[i][0]=sc.nextInt();
            sd[i][1]=sc.nextInt();
        }
        java.util.Arrays.sort(sd, (int[] a, int[] b) -> Integer.compare(a[0], b[0]));
        double mspd=0;
        for(int i=1;i<n;i++){
            double t=sd[i][0]-sd[i-1][0];
            double dis=sd[i][1]-sd[i-1][1];
            double spd=Math.abs(dis/t);
            if(spd>mspd){
                mspd=spd;
            }
        }
        sc.close();
        System.out.println(mspd);
    }
    
}