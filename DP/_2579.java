import java.util.Scanner;

public class _2579 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		long a[]=new long[n+1];
		long dp[]=new long[n+1];
		for(int i=1;i<n+1;i++) {
			a[i]=sc.nextInt();
		}
		dp[1]=a[1];
		if(n>=2)
		dp[2]=a[1]+a[2];
		if(n==3) {
			dp[3]=Math.max(a[1]+a[3], Math.max(a[2]+a[3],a[1]+a[2]));
		}
		for(int i=3;i<n+1;i++) {
							//n-1光篮 版快  ,n-2光篮 版快
			dp[i]=Math.max(a[i-1]+a[i]+dp[i-3], a[i]+dp[i-2]);
		}
		
		System.out.println(dp[n]);

	}

}
