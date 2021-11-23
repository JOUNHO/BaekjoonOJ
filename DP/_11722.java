import java.util.Arrays;
import java.util.Scanner;

public class _11722 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n+1];
		int dp[]=new int[n+1];
		
		for(int i=1;i<n+1;i++) {
			a[i]=sc.nextInt();
		}
		for(int i=1;i<n+1;i++) {
			dp[i]=1;
			for(int j=1;j<i;j++) {
				if(a[i]<a[j]) {
					dp[i]=Math.max(dp[i],dp[j]+1);	
				}
			}
		}
		Arrays.sort(dp);
		System.out.println(dp[n]);
	}

}
