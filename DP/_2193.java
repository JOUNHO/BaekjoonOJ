import java.util.Scanner;

public class _2193 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		
		int dp[]=new int[N];
		
		if(N==1) {
			dp[0]=1;
		}
		else if(N==2) {
			dp[1]=1;
		}
		else {
			dp[0]=1;
			dp[1]=1;
		}
		
		for(int i=2;i<N;i++) {
			dp[i]=dp[i-1]+dp[i-2];
		}
		System.out.println(dp[N-1]);
	}

}
