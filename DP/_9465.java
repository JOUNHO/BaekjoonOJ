import java.util.Scanner;

public class _9465 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int m=sc.nextInt();
		for(int k=0;k<m;k++) {
			int n=sc.nextInt();
			int arr[][]=new int[2][n+1];
			int sum[][]=new int[2][n+1];
			for(int j=0; j<2;j++) {
				for(int i=1;i<n+1;i++) {
				arr[j][i]=sc.nextInt();
			}
		}
		sum[0][0]=0;
		sum[1][0]=0;
		sum[0][1]=arr[0][1];
		sum[1][1]=arr[1][1];
		
		for(int i=2;i<n+1;i++) {
			sum[0][i]=Math.max(sum[1][i-2],sum[1][i-1])+arr[0][i];
			sum[1][i]=Math.max(sum[0][i-2],sum[0][i-1])+arr[1][i];
		}
			System.out.println(Math.max(sum[0][n],sum[1][n]));
		}
	}

}
