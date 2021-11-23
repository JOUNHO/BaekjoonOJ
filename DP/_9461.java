import java.util.Scanner;

public class _9461 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		int n[]=new int[T+1];
		long p[]=new long[101];
		p[1]=1;
		p[2]=1;
		for(int j=1;j<T+1;j++) {
			n[j]=sc.nextInt();
			for(int i=3;i<n[j]+1;i++) {
				p[i]=p[i-3]+p[i-2];
			}
		}
		for(int i=1;i<T+1;i++) {
			System.out.println(p[n[i]]);
		}
	}
}
